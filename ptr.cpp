// This program stores the address of a variable in a pointer.
#include <iostream>
using namespace std;

void printArrayP(int * a, int asize);
void printArrayS(int a [10], int asize);
void printArrayU(int a [], int asize);

int main()
{
    int asize = 8;
	int myList[asize];

	for (int i=0; i<asize; i++ )
        myList[i] = i*i;

    printArrayP(myList, asize);
    printArrayS(myList, asize);
    printArrayU(myList, asize);

	return 0;
}

void printArrayP(int * a, int asize)
{
    cout<<"/////Array Print using Pointer//////"<<endl;
    for (int i=0; i<asize; i++)
         cout<<"\t"<< a[i] ;
    cout<<endl;
}

void printArrayS(int a[10], int asize)
{
    cout<<"/////Array Print using Sized Array//////"<<endl;
    for (int i=0; i<asize; i++)
         cout<<"\t"<< a[i] ; ;
    cout<<endl;
}

void printArrayU(int a[], int asize)
{
    cout<<"/////Array Print using Un-Sized Array//////"<<endl;
    for (int i=0; i<asize; i++)
         cout<<"\t"<< a[i] ; ;
    cout<<endl;
}
