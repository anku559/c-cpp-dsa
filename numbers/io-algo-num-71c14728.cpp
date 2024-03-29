/*
[io-algo-num-71c14728] [Factors of Number]

Write a CPP program to find factors of a number n?
*/

/* Notes
Factors of Number - The numbers which completely divides a given number are called factors of the number.
8 - 1, 2, 4, 8
27 - 1, 3, 9, 27
17 - 1, 17
 */

/* Examples and Constraints

====================== [Example 1] ======================
Inputs - 8
Expected Output - 1, 2, 4, 8

====================== [Example 2] ======================
Inputs - 17
Expected Output - 1, 17

====================== [Example 3] ======================
Inputs - 100
Expected Output - 1, 2, 4, 5, 10, 20, 25, 50, 100

===================== [Constraints] =====================
*/

#include <iostream>
using namespace std;

void factorsOfNumbers(unsigned int n) {
  for (unsigned int i = 1; i <= n; i++) {
    if (n % i != 0) {
      continue;
    } else {
      cout << i << endl;
    }
  }

  /*
  Time Complexity and Cases (factorsOfNumbers)
    - Worst Case Scenarios - Linear Growth O(n)
      - when n is very large and composite (many factors)
      - number of iterations directly depends on the input
    - Average Case Scenarios - Linear Growth O(n)
    - Best Case Scenarios - Constant Growth O(1)
      - if n is 1 it checks condition only 1 time (n % i != 0)
  */
}

int main() {
  int num;
  cout << "Enter number to find factors: ";
  cin >> num;

  factorsOfNumbers(num);
  return 0;
}

// Execute - g++ .\numbers\io-algo-num-71c14728.cpp -o .\output.exe; .\output.exe
