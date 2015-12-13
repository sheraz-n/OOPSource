#include<iostream>
using namespace std;

void simpleFunction (int n){
    int a=9, b=3;

    int sum = a+b+n;
    int product = a*b*n;
    int quotient = (a*n)/b ;
    cout <<"The Sum is :"<<sum<<" The Product is: "<<product<<" The quotient is :"<<quotient;
}

void singleForLoop (int n){

    for (int i=0; i< n; i++){

        cout<<" The square of "<<i<<" is :"<< i*i;
  }
}

void singleWhileLoop (int n){
    int i=0;

    while ( i < n){

    cout<<" The square of "<<i<<" is :"<< i*i;
    i++;

  }
}


void ifStatement (int n){
    if (n%2 == 0)
        cout <<"The input is even";
    else
        for (int i=0; i< n; i++){
            cout <<"The value of i is :"<<i;
        }
}

void nestedForLoops (int n){
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            cout <<"\nProduct of "<<i<<" and "<<j<<" is :"<<i*j ;

}

void twoForLoops (int n){
    for (int i=0; i< n; i++){
            cout <<"\nThe value of i is :"<<i;
    }
    for (int j=0; j< 100; j++){
            cout <<"\nThe value of j is :"<<j;
    }
}

void twoForLoopsNM(int n, int m){
    for (int i=0; i< n; i++){
            cout <<"\nThe value of i is :"<<i;
    }
    for (int j=0; j< m; j++){
            cout <<"\nThe value of j is :"<<j;
    }
}


void nestedForLoopsNM (int n, int m){
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            cout <<"\nProduct of "<<i<<" and "<<j<<" is :"<<i*j ;
}



int main(){

    simpleFunction(25);


return 0;
}
