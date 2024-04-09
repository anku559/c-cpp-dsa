/*
[io-algo-num-1e01832c] [Reverse a Number]

Write a CPP program to reverse a given number?
*/

/* Notes
Suppose 123 - (output * 10) + remainder
  - Iteration 1 = (0 * 10) + 3 = 3
  - Iteration 2 = (3 * 10) + 2 = 32
  - Iteration 3 = (32 * 10) + 1 = 321
 */

/* Examples and Constraints

====================== [Example 1] ======================
Inputs - 1245
Expected Output - 5421

====================== [Example 2] ======================
Inputs - 1234
Expected Output - 4321

====================== [Example 3] ======================
Inputs - 185
Expected Output - 581

===================== [Constraints] =====================
*/

#include <iostream>
#include <stdexcept>
using namespace std;

/**
Function `reverseNumber`: `num` => `int`
- num: int
#### Worst Case Scenarios
#### Average Case Scenarios
#### Best Case Scenarios
*/
int reverseNumber(int num) {
  if (num < 0) {
    throw invalid_argument("Number must be greater than 0.");
  }

  int output = 0;
  int numCopy = num;

  while (numCopy > 0) {
    int remainder = numCopy % 10;
    output = (output * 10) + remainder;
    numCopy /= 10;
  }

  return output;
}

int main() {
  int num;
  cout << "Enter number: ";
  cin >> num;

  cout << reverseNumber(num);
  return 0;
}

// Execute - g++ .\numbers\io-algo-num-1e01832c.cpp -o .\output.exe; .\output.exe
