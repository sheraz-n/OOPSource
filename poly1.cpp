#include <iostream>
using namespace std;
class Employee
{
protected:
    string name;
    float payrate;
public:
    Employee(string theName, float Payrate);
    string getName() const ;
    float getPayRate() const ;
    float pay(float hoursworked) const ;
    void printInfo ();
    };

 Employee::Employee(string theName, float Payrate)
    {name = theName; payrate = Payrate;}
 string Employee:: getName() const
    {return name;}
 float Employee:: getPayRate() const {return payrate ;}
 float Employee:: pay(float hoursworked) const
    { return hoursworked* payrate ;}
 void  Employee:: printInfo ()
    { cout<<"\nEmployee Name : "<<name
          <<"\n Employee Rate per Hour : "<<payrate;}

class Manager : public Employee {
protected:
    bool salaried ;
public:
    Manager (string theName, float Payrate, bool salary);
    bool isSalaried ();//{return salaried;}
    float pay (float hoursworked) const ;

    string printEmpStatus ();
    void setSalaried(bool s);
    void printInfo ();};

Manager:: Manager (string theName, float Payrate, bool salary): Employee (theName,Payrate)
    { salaried = salary;}
    bool Manager:: isSalaried (){return salaried;}
    float Manager::pay (float hoursworked) const { if (salaried) return payrate* 40;
                                          else return Employee::pay(hoursworked);}
    string Manager::printEmpStatus () {if (salaried) return "Salaried";
                              else  return "Per hour";}
    void Manager::setSalaried(bool s){ salaried = s;}
    void Manager::printInfo (){ cout<<"\nEmployee Name : "<<name
                           <<"\nEmployment Status : " << printEmpStatus()
                            <<"\nEmployee Rate per Hour : "<<payrate;}

int main () {
  Employee emp("John Burke", 25.0);
  Manager mgr("Edward Kovacs", 1200.0, true);
  Employee * emptr = NULL;
  Manager *mngptr = NULL;
  Employee &empref = mgr;
//  Manager &mgref = emp; //Not Allowed
   cout<<"\n Base Pointer Base Object"  ;
    emptr = &emp;
    emptr->printInfo(); //Base pointer Base object
    cout<<"\n";
  cout<<"\n Base Pointer Derived Object";
      emptr = &mgr;
    emptr->printInfo();
  //cout<<"\n Derived Pointer Base Object"; //Will generate Error
   mngptr = &emp;

  return 0;
}

 //   mngptr = &emp;
 //   emptr->printInfo();
//    cout<<emptr->isSalaried();
 //   mngptr = &mgr;
 //   cout<<"\n"<<mngptr->isSalaried();
