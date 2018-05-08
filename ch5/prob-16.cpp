// Program file: Programming Problem
// Description:

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <assert.h>
#include <cstdlib>

using namespace std;

int FindFirst(string date);
void getDate(int& m, int& d, int& y);
void getDay(int& m, int& d, int& y);

int main() {

  string date;
  int month = 0, day = 0, year = 0;

  getDate(month, day, year);
  
  getDay(month, day, year);
  return 0;
}

void getDay(int& m, int& d, int& y) {
  int total = y / 4;
  total += y;
  total += d;

  switch (m) {
    case 1: if (y % 4 == 0)
              total -= 1;
    case 10: total += 1;
      break;
    case 2: if (y % 4 == 0)
              total -= 1;
    case 3: 
    case 11: total += 4;
      break;
    case 4: 
    case 7: total += 0;
      break;
    case 5: total += 2;
      break;
    case 6: total += 5;
      break;
    case 8: total += 3;
      break;
    case 9: 
    case 12: total += 6;
      break;
   }

   total = total % 7;

   string s;

   switch (total) {
     case 1: s = "Sunday";
       break;
     case 2: s = "Monday";
       break;
     case 3: s = "Tuesday";
       break;
     case 4: s = "Wednesday";
       break;
     case 5: s = "Thursday";
       break;
     case 6: s = "Friday";
       break;
     case 0: s = "Saturday";
       break;
   }
   cout << "You were born on a " << s << "."  << endl;
}

void getDate(int& m, int& d, int& y) {

  string date;
  int first;

  cout << "Enter birth date: ";
  getline(cin, date);

  first = FindFirst(date);

  m = atoi(date.substr(0, first).c_str() );

  date = date.substr(first + 1);

  first = FindFirst(date);
  
  d = atoi( date.substr(0, first).c_str() );

  y = atoi( date.substr(1).c_str() );

  cout << m << "/" << d << "/" << y << endl;
}

int FindFirst(string date) {
  return date.find_first_of(" -/");
}
