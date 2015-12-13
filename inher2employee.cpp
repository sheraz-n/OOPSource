#include <iostream>
using namespace std;
class Employee
{
protected:
    string name;
    float payrate;
public:
    Employee(string theName, float Payrate) {name = theName; payrate = Payrate;}
    string getName() const {return name;}
    float getPayRate() const {return payrate ;}
    float pay(float hoursworked) const { return hoursworked* payrate ;}
    void printInfo (){ cout<<"\nEmployee Name : "<<name
                            <<"\n Employee Rate per Hour : "<<payrate;}
};

class Manager : public Employee {
protected:
    bool salaried ;
public:
    Manager (string theName, float Payrate, bool salary): Employee (theName,Payrate)
    { salaried = salary;}
    bool isSalaried (){return salaried;}
    float pay (float hoursworked) const { if (salaried) return payrate* 40;
                                          else return Employee::pay(hoursworked);}
    void setSalaried(bool s){ salaried = s;}
};

int main () {
  Employee empl("John Burke", 25.0);
  Manager mgr("Jan Kovacs", 1200.0, true);


  cout << "Changing the Manager's salaried status..." << endl;
  mgr.setSalaried(false);
  cout << "New Pay: " << mgr.pay(35.0) << endl;
  return 0;
}
