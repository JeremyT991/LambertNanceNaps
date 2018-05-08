// Program file: Pratice Problem 7 
// Description: Print out a bill for Fixit Roof Repair

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  cout << setw(28) << "Fixit Roof Repair Service" << endl;
  cout << "Date: July 20, 1998" << endl;

  cout << endl;

  cout << "Cost of labor:" << setw(16) << "$150.00" << endl;
  cout << "Cost of materials:" << setw(12) << "53.00" << endl;
  cout << "Tax:" << setw(26) << "7.21" << endl;

  cout << setw(30) << "-------" << endl;

  cout << "Total cost:" << setw(19) << "$210.21" << endl;

  return 0;

}
