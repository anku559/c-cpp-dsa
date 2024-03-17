/*
[io-algo-bas-64764751] [Perform Arithmetic Operations]

Write a CPP program to perform arithmetic operations on 2 numbers (take input from user)?
*/

/* Examples and Constraints

====================== [Example 1] ======================
Inputs - 34, 17
Expected Output -
  Addition: 51
  Subtraction: 17
  Multiplication: 578
  Division: 2

====================== [Example 2] ======================
Inputs - 100, 1000
Expected Output -
  Addition: 1100
  Subtraction: -900
  Multiplication: 100000
  Division: 0.1

====================== [Example 3] ======================
Inputs - 5.90, 6.25
Expected Output -
  Addition: 12.15
  Subtraction: -0.35
  Multiplication: 36.875
  Division: 0.944

===================== [Constraints] =====================
*/

#include <iostream>
using namespace std;

int main() {
  float num1;
  float num2;

  cout << "Enter Number 1: ";
  cin >> num1;

  cout << "Enter Number 2: ";
  cin >> num2;

  cout << "Addition: " << num1 + num2 << endl;
  cout << "Subtraction: " << num1 - num2 << endl;
  cout << "Multiplication: " << num1 * num2 << endl;
  cout << "Division: " << num1 / num2 << endl;

  return 0;
}

// Execute - g++ .\basics\io-algo-bas-64764751.cpp -o .\output.exe; .\output.exe