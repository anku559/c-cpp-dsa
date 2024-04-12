/*
[io-algo-pat-1a8b11f7] [Square Pattern (nxn)]

Write a CPP program to print a square pattern of nxn (5x5)?
*/

/* Examples and Constraints

====================== [Example 1] ======================
Inputs - 3
Expected Output
  ***
  ***
  ***

====================== [Example 2] ======================
Inputs - 5
Expected Output
  *****
  *****
  *****
  *****
  *****
*/

#include <iostream>
using namespace std;

void squarePattern(int n) {
  // int num = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cout << "*";
      // cout << num << " ";
      // num += 1;
    }
    cout << endl;
  }
}

int main() {
  int num;
  cout << "Enter number: ";
  cin >> num;

  squarePattern(num);

  return 0;
}

// Execute - g++ .\patterns\io-algo-pat-1a8b11f7.cpp -o .\output.exe; .\output.exe
