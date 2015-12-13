#include <iostream>
using namespace std;
class base {
public:
    int i;
};
// derived1 inherits base.
class derived1 : virtual public base {
public:
    int j;
};
// derived2 inherits base.
class derived2 : virtual public base {
public:
    int k;
};
/* derived3 inherits both derived1 and derived2.
This means that there are two copies of base in derived3! */
class derived3 : public derived1, public derived2 {
public:
int sum;
};

int main(){
derived3 ob;
ob.i = 10; // this is ambiguous, not anymore
ob.j = 20;
ob.k = 30;
// i ambiguous here, not anymore
ob.sum = ob.i + ob.j + ob.k;
cout << ob.i << " "; // also ambiguous, Not really
cout << ob.j << " " << ob.k << " ";
cout << ob.sum;
return 0;
}


