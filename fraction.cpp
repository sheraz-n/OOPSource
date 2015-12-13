#include <iostream>
using namespace std;

class Fraction {
    int numer;
    int denom;
   public:
    Fraction (int, int);
    int getNumer ();
    void setNumer (int);
    int getDenom ();
    void setDenom (int) ;
    double toDecimal ();
    void printFraction ();
 //   friend bool isEqual (Fraction , Fraction);
 //   ~Fraction();
};
//implementation

bool Equals (Fraction f1, Fraction f2) {
    if ( f1.getNumer() * f2.getDenom() == f2.getNumer() * f1.getDenom() )
        return true;
    else return false;
 }
Fraction :: Fraction (int n, int d ) {
    numer = n ; denom = d;}

void Fraction :: setNumer (int nn) { numer = nn ;}

void Fraction :: setDenom (int dd) { denom = dd ;}

int Fraction :: getNumer () { return numer ; }

int Fraction :: getDenom () {return denom ; }

 double Fraction:: toDecimal () {
   /*  if (denom == 0)return numer/1; else */ return ((float)numer/ (float)denom) ;}

 void Fraction:: printFraction () {
    cout <<" The Fraction : "<< numer << '/'<< denom<<endl;  }

/*
 bool isEqual (Fraction f1, Fraction f2) {
    if (f1.numer * f2.denom == f2.numer * f1.denom) return true;
    else return false;
 }

 Fraction :: ~Fraction (){
      cout <<endl<<"destructor called for" ; //
      this->printFraction();
 }*/

//Driver
int main() {
    Fraction f1 (1,7);
    cout<<" Decimal of F1 :" << f1.toDecimal()<<endl;
   // f1.printFraction();
    {
     Fraction f2 (5, 6);
     f2.printFraction();
    }
    return 0;
}
