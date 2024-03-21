/*
[io-algo-bas-2393b1ea] [Title]

Write a CPP program to find greatest among n numbers which are given?
*/

/* Examples and Constraints

====================== [Example 1] ======================
Inputs - [1, 43, 54, 123, 5423]
Expected Output - 5423

====================== [Example 2] ======================
Inputs - [54, 33, 100, 4]
Expected Output - 100

====================== [Example 3] ======================
Inputs - [15, 25, 61, 78, 10, 789, 1452, 6532, 4415]
Expected Output - 6532

===================== [Constraints] =====================
*/

int findGreatest(int inputArray[], int size) {
  int greatest = inputArray[0];

  for (int i = 1; i < size; ++i) {
    if (greatest < inputArray[i]) {
      greatest = inputArray[i];
    }
  }

  return greatest;
}

#include <iostream>
using namespace std;

int main() {
  int numbers[11] = {
      23,
      44,
      32,
      521,
      3423,
      5662,
      6621,
      22,
      100,
      45,
      92,
  };

  cout << findGreatest(numbers, sizeof(numbers) / sizeof(numbers[0])) << endl;
  // sizeof(numbers) / sizeof(numbers[0]) - Total number of bytes / bytes of first element

  return 0;
}

// Execute - g++ .\basics\io-algo-bas-2393b1ea.cpp -o .\output.exe; .\output.exe