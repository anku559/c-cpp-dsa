/*
[io-algo-num-45df2f79] [Factorial of a Number]

Write a CPP program to find the factorial of given number?
*/

/* Notes
Factorial - n! = n × (n - 1) × (n - 2) × (n - 3) × ... × 1

A factorial is a function that multiplies a number by every number below it.
  - For example 5!= 5*4*3*2*1=120.

Usage - Find the number of ways n objects can be arranged.
  - How many different ways can the letters in the word “document” be arranged? - 8! = 40,320
  - How many different ways can the letters in the word “physics” be arranged? - 7!/2! = 2,520 (due to presence of s twice)
  - How many different ways can the letters in the word “letters” be arranged? - 7!/(2!*2!) = 1,260 (due to presence of e and t twice)
 */

/* Examples and Constraints

====================== [Example 1] ======================
Inputs - 5
Expected Output - 120

====================== [Example 2] ======================
Inputs - 7
Expected Output - 5040

====================== [Example 3] ======================
Inputs - -10
Expected Output - Error: Invalid Argument

===================== [Constraints] =====================
*/

#include <iostream>
#include <stdexcept>
using namespace std;

long long factorial(int n) {
  if (n < 0) {
    throw invalid_argument("Factorials are not defined for negative numbers");
  }

  long long output = 1;

  for (unsigned int i = 1; i <= n; i += 1) {
    output *= i;
  }

  return output;

  /*
  Time Complexity and Cases (factorial)
    - Worst Case Scenarios - Linear Growth O(n)
      - when n is very large
    - Average Case Scenarios - Linear Growth O(n)
    - Best Case Scenarios - Constant Growth O(1)
      - when n is 1 (loop executes only once)
  */
}

int main() {
  cout << factorial(5) << endl;
  cout << factorial(7) << endl;
  cout << factorial(0) << endl;
  cout << factorial(-10) << endl;
  return 0;
}

// Execute - g++ .\numbers\io-algo-num-45df2f79.cpp -o .\output.exe; .\output.exe
