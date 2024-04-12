/*
[io-algo-pat-69f88295] [Increment Pattern (1-to-n)]

Write a CPP program to print a pattern of 1xn (1x5)?
*/

/* Examples and Constraints

====================== [Example 1] ======================
Inputs - 5
Expected Output
  *
  **
  ***
  ****
  *****

====================== [Example 2] ======================
Inputs - 3
Expected Output
  *
  **
  ***

*/

#include <iostream>
using namespace std;

void incrementPattern(int n) {
  // int num = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << "* ";
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

  incrementPattern(num);

  return 0;
}

// Execute - g++ .\patterns\io-algo-pat-69f88295.cpp -o .\output.exe; .\output.exe
