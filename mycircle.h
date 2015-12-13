#include <iostream>
using namespace std;

class Circle {
    private:
        float radius ;
        string color;
    public:
        Circle (float rad, string col);
        float getRadius ();
        float getArea ();
        string getColor();

};


