#include <iostream>
#include "ZFraction.h"
using namespace std;

 int main(int argc, char const *argv[]) {
  ZFraction a(4,5);
  ZFraction b(2);
  ZFraction c, d;

  c=a+b;
  d=a*b;

  cout << a << " + " << b << " = " << c << endl;
  cout << a << " * " << b << " = " << d << endl;

  if (a>b)
    cout << "a est plus grand que b." << endl;
  else if(a==b)
    cout << "a est égal à b." << endl;
  else
    cout << "a est plus petit que b." << endl;
  return 0;
}
