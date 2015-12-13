#include <iostream>
using namespace std;
//Fraction with operator overloading
class Fraction {
    int numer;
    int denom;
   public:
    Fraction (int, int);
    Fraction (int);
    Fraction ();
    int getNumer ();
    void setNumer (int);
    int getDenom ();
    void setDenom (int) ;
    double toDecimal ();
    void printFraction ();
    friend bool isEqual (Fraction , Fraction);
    bool isEqualM (Fraction);
    ~Fraction();
    //overloaded operators
    Fraction operator+(const Fraction &);
    bool operator== (const Fraction &);
    friend ostream& operator<< (ostream&, const Fraction&);
};
//implementation
Fraction :: Fraction () {}

bool Equals (Fraction f1, Fraction f2) {
    if ( f1.getNumer() * f2.getDenom() == f2.getNumer() * f1.getDenom() )
        return true;
    else return false;
 }
Fraction :: Fraction (int n, int d ) { //cout<<"constructor called "<<endl;
    numer = n ; denom = d; //this -> printFraction();
    }

void Fraction :: setNumer (int nn) { numer = nn ;}

void Fraction :: setDenom (int dd) { denom = dd ;}

int Fraction :: getNumer () { return numer ; }

int Fraction :: getDenom () {return denom ; }

 double Fraction:: toDecimal () {
   /*  if (denom == 0)return numer/1; else */ return ((float)numer/ (float)denom) ;}

 void Fraction:: printFraction () {
    cout <<" The Fraction : "<< numer << '/'<< denom<<endl;  }

///*
// This is the friend function
 bool isEqual (Fraction f1, Fraction f2) {
     cout<<endl<<"----Friend Function Call----";
    if (f1.numer * f2.denom == f2.numer * f1.denom) return true;
    else return false;
 }

bool Fraction :: isEqualM (Fraction f1){
    cout<<endl<<"----Member Function Call----";
   // if (f1.getNumer() * denom == numer * f1.getDenom()) return true;
    if (f1.numer * denom == numer * f1.denom) return true;
    else return false;
}

bool isEqualTP (Fraction f1, Fraction f2) {
     cout<<endl<<"----Third Party Function Call----";
    if (f1.getNumer() * f2.getDenom() == f2.getNumer() * f1.getDenom()) return true;
    else return false;
}

 Fraction :: ~Fraction (){
     // cout <<endl<<"destructor called for" ; //
    //  this->printFraction();
 } //*/
//conversion constructor
Fraction :: Fraction (int x) {
 //   cout<<"Conversion constructor called: ";
    numer = x;
    denom = 1;
//    this->printFraction();
 //   cout<<endl;
}
// Operator overloading Addition operator
Fraction Fraction :: operator+(const Fraction& f1){
    Fraction res;
    cout<<"Fraction Addition operator called :";
    res.numer = f1.numer + numer ;
    res.denom = f1.denom + denom ;
    return res;
}
bool Fraction :: operator==(const Fraction& f1){
    cout<<"\nFraction Comparison operator called :"<<endl;
    return (f1.numer * denom == numer * f1.denom) ;
}
// ostream operator
ostream& operator<< (ostream& ostr, const Fraction& fr){
  //  cout<<"Fraction Output Stream operator called :"<<endl;
    ostr<<fr.numer<<"/"<<fr.denom ;
    return ostr;
}
//Driver
int main() {
    Fraction f1(5, 10);
    Fraction f2 (4,28);
    Fraction f3 (10,20);
   // if (f1==f3) cout<< "Both objects equal"<<endl;
   // else cout<< "Both objects NOT equal"<<endl;

    cout<<f2<<endl<<f3;
    return 0;
}
//*/
