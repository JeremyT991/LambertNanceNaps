// Program file: Programming Problem
// Description:

#include <iostream>
#include <iomanip>
#include <math.h>
#include <assert.h>

using namespace std;

void swap(int& a, int& b);
void divisors(int a, int b);
void gcd(int a, int b);
void lcm(int a, int b);

int main() {

  int a, b;

  cout << "Enter two positive integers: " << endl;
  cin >> a;
  cin >> b;

  swap(a, b);
  divisors(a, b);
  gcd(a, b);
  lcm(a, b);

  return 0;
}

void divisors(int a, int b) {
  cout << "The divisors of " << a << " that do not divide " << b << " are:" << endl;

  for (int i = a; i > 0; i--) {
    if ((a % i == 0) && (b % i != 0))
      cout << setw(5) << i << endl;
  }
  cout << endl;
}

void gcd(int a, int b) {
  int i;
  for (i = a; i > 0; i--) {
    if ((a % i == 0) && (b % i == 0))
      break;
  }
  cout << "The gcd of " << a << " and " << b << " is " << i << "." << endl;
}

void lcm(int a, int b) {
  int i = a;

  while ((i % a != 0) || (i % b != 0)) i++;

  cout << "The lcm of " << a << " and " << b << " is " << i << "." << endl;
}

void swap(int& a, int& b) {
  if (a > b) {
    int temp = a;
    a = b;
    b = temp;
  }
}
