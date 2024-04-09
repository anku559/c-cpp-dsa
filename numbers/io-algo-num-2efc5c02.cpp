/*
[io-algo-num-2efc5c02] [Digit Display Reverse]

Write a CPP program to display digits of number in reverse order?
*/

/* Notes
- Suppose a number 1724
For 4 - 1724 % 10 = 4 | 1724 / 10 = 172 (integer division)
For 2 - 172 % 10 = 2 | 172 / 10 = 17 (integer division)
For 7 - 17 % 10 = 7 | 17 / 10 = 1 (integer division)
For 1 - 1 % 10 = 1 | 1 / 10 = 0 (integer division)
 */

/* Examples and Constraints

====================== [Example 1] ======================
Inputs - 1724
Expected Output - 4, 2, 7, 1

====================== [Example 2] ======================
Inputs - 54214
Expected Output - 4, 1, 2, 4, 5

====================== [Example 3] ======================
Inputs - 102412
Expected Output - 2, 1, 4, 2, 0, 1

===================== [Constraints] =====================
*/

#include <iostream>
using namespace std;

/**
Function `displayDigitsReverse`: `num` => `void`
- num: int

#### Worst Case Scenarios - O(d)
- a linear relationship between the size of the input (number of digits in this case) and the time taken for the algorithm to execute
- d is the number of digits in the input number
- the loop will execute d times because each iteration removes one digit from numCopy until numCopy becomes 0

#### Average Case Scenarios - O(d)

#### Best Case Scenarios - Constant Growth O(1)
- if n one digit (e.g., 0 to 9)
 */
void displayDigitsReverse(int num) {
  int numCopy = num;
  int sum = 0;
  while (numCopy > 0) {
    int digit = numCopy % 10;
    numCopy /= 10;
    sum += digit;
    cout << digit << endl;
    // cout << sum << endl;
  }
  cout << "Sum: " << sum << endl;
}

int main() {
  int num;
  cout << "Enter number: ";
  cin >> num;

  displayDigitsReverse(num);
  // cout << endl;
  // displayDigitsReverse(1724);
  // cout << endl;
  // displayDigitsReverse(54214);
  // cout << endl;
  // displayDigitsReverse(102412);
  return 0;
}

// Execute - g++ .\numbers\io-algo-num-2efc5c02.cpp -o .\output.exe; .\output.exe
