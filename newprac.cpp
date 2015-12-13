#include <iostream>
using namespace std;
int main(){
int asize = 5;
//Dynamic Arrays
int *p, i;

try {
p = new int [asize]; // allocate integer array
} catch (bad_alloc xa) {
cout << "Allocation Failure\n";
return 1;
}
for(i=0; i<asize; i++ ) {p[i] = i;}
for(i=0; i<asize; i++) {cout << p[i] << " ";}
delete [] p; // release the array
cout<<endl;
asize = 7;
p = new int[asize];
for(i=0; i<asize; i++) {p[i]=i; cout << p[i] << " ";}
return 0;
}
