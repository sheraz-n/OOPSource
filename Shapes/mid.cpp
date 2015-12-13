#include <iostream>
using namespace std;


int main (){

int a[10]= {0};
for (int i=0; i<10; i++) a[i]= i;
int * const p = a;

cout <<"Using a "<< *(a+4)<<"Using p " << p[4];

 int x =25;

return 0;
}
