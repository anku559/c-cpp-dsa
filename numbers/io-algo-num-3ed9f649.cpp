/*
[io-algo-num-3ed9f649] [Armstrong Number]

Write a CPP program to check if a number is Armstrong Number?
*/

/* Notes
An Armstrong number (also known as Narcissistic number or pluperfect number) is a number that is equal to the sum of its own digits raised to the power of the number of digits.
A number that is equal to the sum of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.
- 153 = 1^3 + 5^3 + 3^3 => 1 + 125 + 27 = 153
 */

/* Examples and Constraints

====================== [Example 1] ======================
Inputs - 153
Expected Output - Armstrong Number

====================== [Example 2] ======================
Inputs - 125
Expected Output - Not a Armstrong Number

====================== [Example 3] ======================
Inputs - 407
Expected Output - Armstrong Number

===================== [Constraints] =====================
*/

#include <iostream>
using namespace std;

/**
Function `checkArmstrong`: `num` => `string`
- num: int

#### Worst Case Scenarios

#### Average Case Scenarios

#### Best Case Scenarios
*/
string checkArmstrong(int num) {
  int numCopy = num;
  int sumOfCubes = 0;
  while (numCopy > 0) {
    int remainder = numCopy % 10;
    numCopy /= 10;
    sumOfCubes += remainder * remainder * remainder;
  }
  cout << "Number: " << num << endl;
  cout << "Sum of Cubes: " << sumOfCubes << endl;

  if (sumOfCubes == num) {
    return "Armstrong Number";
  } else {
    return "Not a Armstrong Number";
  }
}

int main() {
  int num;
  cout << "Enter number: ";
  cin >> num;

  cout << checkArmstrong(num);
  return 0;
}

// Execute - g++ .\numbers\io-algo-num-3ed9f649.cpp -o .\output.exe; .\output.exe
