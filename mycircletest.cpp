#include <iostream>
#include "mycircle.h"

using namespace std;

int main(){

Circle c1 (25, "Green");

cout<<" Radius :"<<c1.getRadius()<<endl;
cout<<" Area :"<<c1.getArea()<<endl;
cout<<" Color :"<<c1.getColor()<<endl;
cout <<sizeof(c1);
}
