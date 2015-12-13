#include <iostream>
using namespace std;

class Base {
public:
    Base () {cout<<"\n Base class constructor Called"; }
    //non virtual destructor
     virtual ~Base (){cout<<"\n Base class destructor Called";}
};
class D1: public Base {
public:
    D1(){cout <<"\n Derived class constructor Called";}
    ~D1(){cout<<"\n Derived class destructor Called ";}

};

int main(){
    D1 * d1ptr = new D1;
    Base * bptr = d1ptr;
    delete  bptr;
    return 0;
}

