#include <iostream>
using namespace std;

//References
void f() {
int j = 1;
int &r = j;	//r and j refer to same int
cout << "Address of r: " <<&r <<endl;
cout << "Address of j: " <<&j<<endl;

int x = r;	// x now is 1
r = 2;		// j now is 2
}	//f

int main(){

int k =25;
int &r1 = k;	// okay: r1 is initialized
int z =5;
r1=z;
cout << "Address of r1: " <<&r1 <<endl;
cout << "Contents of r1: " <<r1 <<endl;
cout << "Address of k: " <<&k<<endl;
cout << "Contents of k: " <<k <<endl;
cout << "Address of z: " <<&z<<endl;
cout << "Contents of z: " <<z <<endl;
//int &r2;		// error; initializer missing
}
