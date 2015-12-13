#include<iostream>
using namespace std;

int main(){

int arr[] = {1, 2};

cout<<" Value of arr: "<< arr<<endl;
cout<<" Value of &arr: "<< &arr +1 <<endl;
cout<<" Value of &arr[0]: "<< &arr[0]<<endl;
int* p = &arr[0];
*(p + 1) = 10;

//cout <<
//std::string& sref = std::string();
return 0;
}
