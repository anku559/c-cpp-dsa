/*
[io-algo-bas-45043fc4] [Leap Year]

Write a CPP program to find if the given year is a leap year or not?
*/

/* Notes
All years which are perfectly divisible by 4 are leap years except for century years (years ending with 00) which is leap year only it is perfectly divisible by 400.
For example: 2012, 2004, 1968 etc are leap year but, 1971, 2006 etc are not leap year. Similarly, 1200, 1600, 2000, 2400 are leap years but, 1700, 1800, 1900 etc are not.
 */

/* Examples and Constraints

====================== [Example 1] ======================
Inputs - 1600
Expected Output - 1600 is a leap year

====================== [Example 2] ======================
Inputs - 1700
Expected Output - 1700 is not a leap year

====================== [Example 3] ======================
Inputs - 2100
Expected Output - 2100 is not a leap year
*/

#include <iostream>
using namespace std;

string checkLeapYear(int year) {
  string output = to_string(year);

  if (year % 4 == 0) {
    if (year % 100 == 0) {
      if (year % 400 == 0) {
        output += " is a leap year";
      } else {
        output += " is not a leap year";
      }
    } else {
      output += " is a leap year";
    }
  } else {
    output += " is not a leap year";
  }
  return output;

  /* Alternate
  if (
        (year % 4 == 0 && year % 100 != 0) ||
        year % 400 == 0
      ) {}
  */
}

int main() {
  int year;
  cout << "Enter year: ";
  cin >> year;

  cout << checkLeapYear(year);
  return 0;
}

// Execute - g++ .\basics\io-algo-bas-45043fc4.cpp -o .\output.exe; .\output.exe