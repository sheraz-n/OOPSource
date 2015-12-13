#include <iostream>
using namespace std;
int factorial (int);
int fib (int);

int main (){
cout<< "Factorial of 6 is :" <<factorial(6)<<endl;
cout << "7th Fibonacci number is: "<<fib(7)<<endl;
return 0;
}
int factorial (int n){
    if (n > 1) //Base Case
        return n * factorial(n-1);
    else   // Recursive Case
        return 1;
}
int fib (int n){
    // Base case
    if ( n <= 1 ) return n;
    else //Recursive Case
        return (fib(n-1) + fib (n-2));
}
