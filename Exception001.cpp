#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception
{
  public:
  virtual const char * what () const throw ()  {
        return "C++ My Exception occurred";
  }
} myex;

double division(int a, int b){
   if( b == 0 ){
      throw "Divide by Zero Error";
   }
   return (a/b);
}

int main(){
    int a= 10;
    int b =0;
  try  {
    cout<<"\n The result of division is" << division(a,b) ;
    }
  catch (int e) {
    cout<<"Exception no. "<<e<< " occurred";
  }
  catch (...){//Elipsis can catch any exception and should be used as lastHandler
    //cout<<"Exception no. "<<e<< " occurred";
    cout<<"Some weired exception has occurred\n";
    }
  return 0;
  }
