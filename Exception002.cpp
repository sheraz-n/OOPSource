#include <iostream>
#include <exception>
using namespace std;
double division(int a, int b);

class MyException : public exception{
  public:
  virtual const char * what () const throw ()  {
        return "C++ My Exception occurred"; }
} myex;

int main(){
    int a= 10;
    int b =0;
  try  {
    cout<<"\n The result of division is" << division(a,b) ;
  }
  catch (MyException& e) {
    cout<<"\n"<<e.what()<<"\n";
  }
  return 0;}

double division(int a, int b) throw MyException {
   return (a/b);
}
