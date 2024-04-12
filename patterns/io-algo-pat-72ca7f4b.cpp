/*
[io-algo-pat-72ca7f4b] [Decrement Pattern (n-to-1)]

Write a CPP program to print a pattern of nx1 (5x1)?
*/

/* Examples and Constraints

====================== [Example 1] ======================
Inputs - 5
Expected Output
  *****
  ****
  ***
  **
  *

====================== [Example 2] ======================
Inputs - 3
Expected Output
  ***
  **
  *
*/

#include <iostream>
using namespace std;

void decrementPattern(int n) {
  for (int i = n; i >= 1; i--) {
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

  decrementPattern(num);
  return 0;
}

// Execute - g++ .\patterns\io-algo-pat-72ca7f4b.cpp -o .\output.exe; .\output.exe

/**
Function `fnName`: `param` => `void`
- param: int

#### Worst Case Scenarios
#### Average Case Scenarios
#### Best Case Scenarios
*/