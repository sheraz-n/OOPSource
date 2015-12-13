#include <iostream>
#include "proj2.h"

using namespace std;

main()
{
  date2013 a;
  cout << "The default date is ";
  a.print();
  cout << "." << endl;

  date2013 b(70);
  cout << "\nThe 70th day in 2013 is ";
  b.print();
  cout << "." << endl;

  date2013 b1(1);
  cout << "\nThe first day in 2013 is ";
  b1.print();
  cout << "." << endl;

  date2013 c(20, 3);
  cout << "\n03/20/2013 is ";
  c.print();
  cout << "." << endl;

  date2013 c1(2, 12);
  cout << "\n12/02/2013 is ";
  c1.print();
  cout << "." << endl;

  c.setdate(20, 3);
  cout << "\n5 days after ";
  c.print();
  cout << " is ";
  c.plusday(5);
  c.print();
  cout << "." << endl;

  c.setdate(20, 3);
  cout << "\n63 days after ";
  c.print();
  cout << " is ";
  c.plusday(63);
  c.print();
  cout << "." << endl;

  c.setdate(1, 2);
  cout << "\n500 days after ";
  c.print();
  cout << " is ";
  c.plusday(500);
  c.print();
  cout << "." << endl;
}
