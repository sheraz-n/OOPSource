#include <iostream>
using namespace std;

class Thing {
      int x;
      int y;
      const int z=0; // Will generate a warning
public:
    Thing ();
};

Thing::Thing(): z(10) {    x= 1; y=1;
                  //  z=1;  //Will generate an error
                    }

int main(){

    return 0;
}
