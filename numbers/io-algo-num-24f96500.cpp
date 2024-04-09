/*
[io-algo-num-24f96500] [LCM and HCF]

Write a CPP program to find LCM and HCF(GCD)?
*/

/* Notes
 */

/* Examples and Constraints

====================== [Example 1] ======================
Inputs -
Expected Output -

====================== [Example 2] ======================
Inputs -
Expected Output -

====================== [Example 3] ======================
Inputs -
Expected Output -

===================== [Constraints] =====================
*/

#include <iostream>
using namespace std;

// GCD (HCF) using Euclidean algorithm
int gcdByEuclid(int a, int b) {
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

// LCM using GCD
int lcmByGCD(int a, int b) {
  return (a * b) / gcdByEuclid(a, b);
}

int gcd(int num1, int num2) {
  int output = 0;

  while (num1 != num2) {
    if (num1 > num2) {
      num1 -= num2;
    }

    if (num2 > num1) {
      num2 -= num1;
    }
  }
  output = num1;  // num1 and num2 are same
  return output;
}

int main() {
  int num1, num2;
  cout << "Enter number 1: ";
  cin >> num1;
  cout << "Enter number 2: ";
  cin >> num2;

  cout << "HCF (GCD): " << gcd(num1, num2) << endl;
  cout << "LCM: " << lcmByGCD(num1, num2) << endl;
  return 0;
}

// Execute - g++ .\numbers\io-algo-num-24f96500.cpp -o .\output.exe; .\output.exe
