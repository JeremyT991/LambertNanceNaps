// Program file: Programming Problem 1
// Description: Quadratic equation

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

double eqp(double a, double b, double c);
double eqm(double a, double b, double c);
void print(double n);
void printRoot(double n);

int main() {
  
  double a, b, c;  

  cout << "Enter coefficients a, b, and c for the quadratic equation: " << endl;
  cout << " a = ";
  cin >> a;
  cout << " b = ";
  cin >> b;
  cout << " c = ";
  cin >> c;

  print(a);
  cout << "x^2 + ";
  print(b);
  cout << "x + ";
  print(c);
  cout << " = ";
  printRoot(eqp(a, b, c));
  printRoot(eqm(a, b, c));
  cout << endl;

  return 0;
}

void printRoot(double n) {
  cout << "(x ";
  if (n >= 0)
    cout << "+ " << n << ")";
  else
    cout << "- " << n * (-1) << ")";
}

void print(double n) {
  if (n == 1)
    ;
  else if (n >= 0)
    cout << n;
  else
    cout << "(" << n << ")";
}

double eqp(double a, double b, double c) {
  return (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
}

double eqm(double a, double b, double c) {
  return (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);
}

