 // Scoping example.
#include <iostream>
using namespace std;
void useLocal(); // function prototype
void useStaticLocal(); // function prototype
void useGlobal(); // function prototype

int x= 1; // global variable
int main()
 {
 cout << "global x in main is " << x<<endl;
 int x= 5; // local variable to main
 cout << "local x in main's outer scope is " << x<<endl;
    { // start newscope
    int x= 7; // hides bothx in outer scope and global x
    cout << "local x in main's inner scope is " << x<<endl;
    } // end new scope
 cout << "local x in main's outer scope is " << x<<endl;
 useLocal(); // useLocal has localx
 useStaticLocal(); // useStaticLocal has staticlocal x
 useGlobal(); // useGlobal uses globalx
 useLocal(); // useLocal reinitializesits local x
 useStaticLocal(); // static localx retains itsprior value
 useGlobal(); // global xalsoretainsits prior value
 cout << "\nlocal x in main is " << x<<endl;
 return 0; } // end main

 void useLocal()
 { int x= 25; // initialized each time useLocal iscalled
    cout << "\nlocal x is " << x<< " on entering useLocal" << endl;
    ++x;
    cout << "local x is " << x<< " on exiting useLocal" << endl; }
 // useStaticLocal initializes staticlocal variable x only the  first time.
 // value of x is saved between calls to this function
 void useStaticLocal()
 {  cout << "\nlocal static x is " << x<< " on entering useStaticLocal" << endl;
    ++x;
    cout << "local static x is " << x<< " on exiting useStaticLocal"<<endl; }
 // useGlobal modifies global variable xduring each call
 void useGlobal()
 {  cout << "\nglobal x is " << x<< " on entering useGlobal" << endl;
    x*= 10;
    cout << "global x is " << x<< " on exiting useGlobal" << endl; }
