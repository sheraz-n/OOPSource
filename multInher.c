#include <iostream>

using namespace std;

//Multiple inheritance
class Base1 {
    protected:
    int x1 ;
    public:
    void showX1 () {cout << "X1 from Base1 is : "<< x1<<endl;}
};

class Base2 {
protected:
    int x2;
public:
    void showX2 () {cout << "X2 from Base2 is : "<< x2<<endl;}
};

class Derived : public Base1, public Base2 {
    void setX1X2 (int a, int b) { x1 = a; x2 = b;}

};

int main (){
    Derived obj;
    obj.setX1X2 (25, 30);
    obj.showX1();
    obj.showX2();
    return 0;
}
