// Program file: Programming Problem
// Description:

#include <iostream>
#include <iomanip>
#include <math.h>
#include <assert.h>

using namespace std;

int main() {
  
  int length;

  cout << "Enter length of phone call: ";
  cin >> length;
  cout << "Total cost of call: " << 1.15 + (length * .26) << endl;
  
  return 0;
}
