#include <iostream>
using namespace std;

class Circle {
    private:
        float radius ;
        string color;
    public:
        Circle (float r, string c){radius = r; color =c ;}
        float getRadius (){ return radius;}
        float getArea () {return (22/7 * radius * radius);}
        string getColor();
};
//float Circle::getRadius () { return radius;}
//float Circle::getArea () {return (22/7 * radius * radius); }
string Circle :: getColor () {return color ;}

int main(){
    //Circle c1(25, "RED") ;
    Circle c1 = Circle(1.2, "red");
    cout<< c1.getArea()<<endl<<c1.getColor();
    return 0;}
