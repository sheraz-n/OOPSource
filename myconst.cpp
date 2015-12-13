#include <iostream>
using namespace std;

//void myinc (const int *);
void mydec (int *const);
void myinc (int * );

int main (){

 int x =25;
 int * xptr = NULL ;
 int y = 30;
 int z= 50;
 const int conx = 30;

 const int * yptr = &y;

const int * const cptr = &x ;

 myinc (&x) ;
// myinc (yptr);

 yptr = &z;
 //xptr = &conx;

//(*yptr)++ ;
cout <<"x :"<<x;
cout <<"\ny :"<<y;




}
void myinc (int * ptr) { (*ptr)++ ; }  // nonconst ptr to non const data

//void myinc (const int * ptr) { (*ptr)++ ; }  // non const  pointer to constant data

void mydec (int *const conptr) {  (*conptr)-- ;} // constant pointer to non constant data
