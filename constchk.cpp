#include <iostream>
using namespace std;

class ConstChk {
   public:
       ConstChk();
       void show() const;  // placing const keyword
                           //at end of declaration will make
                           //member function const
       void what();
       void print(const ConstChk & x);
   private:
      int c;
      const int d = 1;     // will generate a warning
};
    void ConstChk:: show() const {}
    ConstChk::ConstChk() : d(10) { c=0 ; }  //initializer list
int main()
{
    const int I = 10;  // Can not be changed during program
    const ConstChk xx;  //const object can only call const function
    ConstChk uncon ;
    uncon.show(); //can call all member function
    xx.show();   // can only call const member function
//    xx.what();  // will create an error
    return 0;
}
