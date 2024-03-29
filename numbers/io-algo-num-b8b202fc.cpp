/*
[io-algo-num-b8b202fc] [Perfect Number]

Write a CPP program to that checks a given number is perfect or not?
*/

/* Notes
Perfect Number = If double the number == sum of the factors

Factors of 6 = 1, 2, 3, 6
  - Sum = 12
  - Double Number = 2 * 6 = 12
  - 12 == 15 (perfect number)

Factors of 8 = 1, 2, 4, 8
  - Sum = 15
  - Double Number = 2 * 8 = 16
  - 16 != 15 (not a perfect number)
*/

/* Examples and Constraints

====================== [Example 1] ======================
Inputs - 6
Expected Output - 6 is Perfect Number

====================== [Example 2] ======================
Inputs - 8
Expected Output - 8 is not a Perfect Number

====================== [Example 3] ======================
Inputs - 28
Expected Output - 28 is Perfect Number
*/

#include <iostream>
using namespace std;

int factorsOfNumbers(unsigned int n) {
  int sumFactors = 0;

  for (unsigned int i = 1; i <= n; i++) {
    if (n % i != 0) {
      continue;
    } else {
      sumFactors += i;
    }
  }

  // cout << "Factors Sum: " << sumFactors << endl;

  /*
  Time Complexity and Cases (factorsOfNumbers)
    - Worst Case Scenarios - Linear Growth O(n)
      - when n is very large and composite (many factors)
      - number of iterations directly depends on the input
    - Average Case Scenarios - Linear Growth O(n)
    - Best Case Scenarios - Constant Growth O(1)
      - if n is 1 it checks condition only 1 time (n % i != 0)
  */
  return sumFactors;
}

int main() {
  int num;
  cout << "Enter number to find if perfect: ";
  cin >> num;

  int sumOfFactors = factorsOfNumbers(num);

  if (sumOfFactors == 2 * num) {
    cout << num << " is Perfect Number";
  } else {
    cout << num << " is not a Perfect Number";
  }

  return 0;
}

// Execute - g++ .\numbers\io-algo-num-b8b202fc.cpp -o .\output.exe; .\output.exe
