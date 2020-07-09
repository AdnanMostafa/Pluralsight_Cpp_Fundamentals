//overload_demo

#include <iostream>
#include "headers.cpp"
using namespace std;


// add(0,0);
// add(0,0,0);

int main() {
  auto a = add(3,4);
  cout << "3 + 4 is: " << a;

  cout << endl;
  double b = add(1.2, 3.3);
  cout << "1.2 + 3.3 is: " << b;

  cout << endl;
  double c = add(1.2, 3.3, 4.2);
  cout << "1.2 + 3.3 + 4.2 is: " << c;

  if (test(true)) {
    cout << "True passes the test" << endl;
  }

  if (test(3.2)) {
    cout << "3.2 passes the test" << endl;
  }

// this will produce an error
  //if (test(3)) {
    //cout << "3.2 passes the test" << endl;
  //}


  return 0;
}