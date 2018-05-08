// Program file: Programming Problem
// Description:

#include <iostream>
#include <iomanip>
#include <math.h>
#include <assert.h>

using namespace std;

int main() {

  int num1;
  int num2;

  cout << "num1: ";
  cin >> num1;
  cout << "num2: ";
  cin >> num2;

  assert((num1 > num2) && (num1 > 0));

  if (num1 < num2) {
    num1 = num2 + 1;
  }
  
  assert((num1 > num2) && (num1 > 0));

  return 0;
}
