/*
[io-algo-bas-a851c904] [Title]

Write a CPP program to find greatest of 3 numbers?
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

int main() {
  int num1, num2, num3;

  cout << "Enter Number 1: ";
  cin >> num1;

  cout << "Enter Number 2: ";
  cin >> num2;

  cout << "Enter Number 3: ";
  cin >> num3;

  int greatest = num1;
  if (num2 > greatest) {
    greatest = num2;
  }
  if (num3 > greatest) {
    greatest = num3;
  }

  cout << "The greatest number is: " << greatest << endl;
  return 0;
}

// Execute - g++ .\basics\io-algo-bas-a851c904.cpp -o .\output.exe; .\output.exe
