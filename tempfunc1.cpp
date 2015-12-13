#include <iostream>
using namespace std;

template <class T>
void printArray (T arr[], int asize);

template <class T>
T minimum (T a[], int asize){
    T mini = a[0];
    for (int i=0; i<asize-1; i++)
        if (a[i+1]< a[i]) mini= a[i+1];
    return mini;
}

template <class T>
T maximum (T a[], int asize){

    T maxi= a[0];
    for (int i=0; i<asize-1; i++)
    if ( a[i+1] > a[i]) maxi= a[i+1];
    return maxi;
}
template <class T>
void swapByPointer (T *a, T *b){
    T temp = *a;
    *a = *b;
    *b = temp;
}



int main (){
 const int asize = 15;

 int iarray [asize] = {0};
 for (int i=0; i<asize; i++) iarray[i]= 10*(i+3) ;
 printArray(iarray, asize);

 float farray [asize]  = {0};
 for (int i=0; i<asize; i++) farray[i]= 10*(i+3.25) ;
 printArray(farray, asize);

 cout<< "\nMaximum integer is : "<<maximum(iarray, asize);
 cout<< "\nMinimum integer is : "<<minimum(iarray, asize);
 cout<< "\nMaximum float is : "<<maximum(farray, asize);
 cout<< "\nMinimum integer is : "<<minimum(farray, asize);

 double d1 = 567.34;
 double d2 = 984.56;
 cout <<"\nBefore swap \n D1 = "<<d1<<"\nD2 = "<<d2;
 swapByPointer(&d1, &d2);
 cout <<"\nAfter swap \n D1 = "<<d1<<"\nD2 = "<<d2;
return 0;
}

template <class T>
void printArray (T arr[], int asize){
cout<<"\n";
for (int i=0; i<asize; i++) { cout<<arr[i]<<"\t"; }
cout<<"\n";
}
