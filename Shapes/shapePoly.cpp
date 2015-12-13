#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
    virtual void moveTo(int, int)=0;
};

class Shape2D : public Shape {
 protected:
    int x ;
    int y ;
public:
   Shape2D (int newx, int newy) {x= newx; y=newy;}
   int getX(){return x; }
   int getY(){return y; }
   void setX(int newx){ x= newx;}
   void setY(int newy){ y= newy;}
   void moveTo(int newx, int newy){setX(newx); setY(newy);}
};

class Shape3D : public Shape2D {
protected:
        int z;
public:
    int getZ(){return z; }
    void setZ(int newz){z= newz;}
    void moveTo(int newx, int newy, int newz){ setZ(newz);
                                                Shape2D::moveTo(newx,newy); }
};

class Circle: public Shape2D {
protected:
   int radius;
public:
   Circle(int newx, int newy, int newradius);
   int getRadius();
   void setRadius(int newradius);
   void draw();
};
Circle::Circle(int newx, int newy, int newradius): Shape2D(newx, newy){
   setRadius(newradius);
}
// accessors for the radius
int Circle::getRadius() { return radius; }
void Circle::setRadius(int newradius) { radius = newradius; }
// draw the circle
void Circle::draw() {
  cout << "Drawing a Circle at:(" << getX() << "," << getY() << "), radius " << getRadius() << endl;
}

class Rectangle: public Shape2D {
protected:
   int width;
   int height;
public:
   Rectangle(int newx, int newy, int newwidth, int newheight);
   int getWidth();
   int getHeight();
   void setWidth(int newwidth);
   void setHeight(int newheight);
   void draw();
};
Rectangle::Rectangle(int newx, int newy, int newwidth, int newheight): Shape2D(newx, newy) {
   setWidth(newwidth);
   setHeight(newheight);
}
// accessors for width and height
int Rectangle::getWidth() { return width; }
int Rectangle::getHeight() { return height; }
void Rectangle::setWidth(int newwidth) { width = newwidth; }
void Rectangle::setHeight(int newheight) { height = newheight; }
// draw the rectangle
void Rectangle::draw() {
   cout << "Drawing a Rectangle at:(" << getX() << "," << getY() <<
      "), width " << getWidth() << ", height " << getHeight() << endl;
}

int main() {
   // set up array to the shapes
   Shape *scribble[2];
   scribble[0] = new Rectangle(10, 20, 5, 6);
   scribble[1] = new Circle(15, 25, 8);

   // iterate through the array and handle shapes polymorphically
   for (int i = 0; i < 2; i++) {
      scribble[i]->draw();
      scribble[i]->moveTo(100, 100);
      scribble[i]->draw();
   }

return 0;
}
