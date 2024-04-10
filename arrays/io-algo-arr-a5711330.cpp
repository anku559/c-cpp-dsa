/*
[io-algo-arr-a5711330] [Calculate sum in the Array]

Write a CPP program that takes an array of numbers as input and calculates the sum of those numbers?
*/

/* Notes
 */

/* Examples and Constraints

====================== [Example 1] ======================
Inputs - [10, 20, 30, 40, 50]
Expected Output - 150

====================== [Example 2] ======================
Inputs - [11, 22, 33, 44, 55]
Expected Output - 165

====================== [Example 3] ======================
Inputs - [1.5, 5.4, 4.4, 6.8, 9.5]
Expected Output - 27.6

===================== [Constraints] =====================
*/

#include <iostream>
using namespace std;

int sumIntArray(int arr[], int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum;
}

float sumFloatArray(float arr[], int size) {
  float sum = 0.0f;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum;
}

int main() {
  int arr1[5] = {10, 20, 30, 40, 50};
  int arr2[5] = {11, 22, 33, 44, 55};
  float arr3[5] = {1.5f, 5.4f, 4.4f, 6.8f, 9.5f};

  cout << sumIntArray(arr1, sizeof(arr1) / sizeof(int)) << endl;
  cout << sumIntArray(arr2, sizeof(arr2) / sizeof(int)) << endl;
  cout << sumFloatArray(arr3, sizeof(arr3) / sizeof(int)) << endl;

  return 0;
}

// Execute - g++ .\arrays\io-algo-arr-a5711330.cpp -o .\output.exe; .\output.exe
