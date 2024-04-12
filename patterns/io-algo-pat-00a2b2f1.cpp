/*
[io-algo-pat-00a2b2f1] [Increment-Decrement (Pattern 1-to-n-to-1)]

Write a CPP program to print a pattern of 1xn and nx1 (1x5x1)?
*/

/* Examples and Constraints

====================== [Example 1] ======================
Inputs - 3
Expected Output
  *
  **
  ***
  **
  *

====================== [Example 2] ======================
Inputs - 5
Expected Output
  *
  **
  ***
  ****
  *****
  ****
  ***
  **
  *
*/

#include <iostream>
using namespace std;

void incrementDecrementPattern(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = n - 1; i >= 1; i--) {
    for (int j = i; j >= 1; j--) {
      cout << "*";
    }
    cout << endl;
  }
}

int main() {
  int num;
  cout << "Enter number: ";
  cin >> num;

  incrementDecrementPattern(num);
  return 0;
}

// Execute - g++ .\patterns\io-algo-pat-00a2b2f1.cpp -o .\output.exe; .\output.exe
