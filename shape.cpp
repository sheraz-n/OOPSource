#include <iostream>

using namespace std;

class Shape2D {
protected:
      double area;
  public:
      Shape2D (float a)  { cout<<"Shape2D called\n";
      area=0;}
      double getArea() {return area;}
 //     void setArea (double a){ area = a; }
};

class Circle : public Shape2D  {
       float radius;
public:
       Circle (float r): Shape2D (3.14 * r*r){cout<<"Circle called\n";
       radius = r; }
       float getRadius () {return radius;}
       double getArea ()  {area = 3.14 * radius*radius ; return area;}
};
int main(){
   Circle c1(5);
  // c1.setArea();
   cout<<"\n The area is : "<<c1.getArea();

   return 0;
}

