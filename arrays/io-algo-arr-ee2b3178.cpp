/*
[io-algo-arr-ee2b3178] [Reverse Array]

Write a CPP program to reverse an array?
*/

/* Notes
Two Pointer Method
  1. Initialize two pointers, left = 0 (First Index) and right = size - 1 (Last Index = Length of Array - 1)
  2. Repeat until left < right:
    a. Swap arr[left] and arr[right]
    b. Increment left and decrement right

 */

/* Examples and Constraints

====================== [Example 1] ======================
Inputs - [1, 2, 3, 4, 5]
Expected Output - [5, 4, 3, 2, 1]

====================== [Example 2] ======================
Inputs - [1, 4, 65, 74, 2, 3, 4]
Expected Output - [4, 3, 2, 74, 65, 4, 1]

====================== [Example 3] ======================
Inputs - [251, 20, 3, 96, 45, 10, 654]
Expected Output - [654, 10,  45, 96, 3, 20, 251]

===================== [Constraints] =====================
*/

#include <iostream>
using namespace std;

/**
Function `fnName`:`arr[]`, `size` => `void`
- arr[]: int[]
- size: int

#### Worst Case Scenarios
#### Average Case Scenarios
#### Best Case Scenarios
*/
void reverseArrayTwoPointer(int arr[], int size) {
  int left = 0;          // First Element
  int right = size - 1;  // Index

  while (left < right) {
    // Swap 2 variable technique
    int temp = arr[right];
    arr[right] = arr[left];
    arr[left] = temp;

    left++;
    right--;
  }
}

int main() {
  int arr[] = {251, 20, 3, 96, 45, 10, 654};

  cout << "Original Array" << endl;
  for (auto x : arr) {
    cout << x << " ";
  }
  cout << endl
       << endl;

  cout << "Reversed Array" << endl;
  reverseArrayTwoPointer(arr, sizeof(arr) / sizeof(int));

  for (auto x : arr) {
    cout << x << " ";
  }
  return 0;
}

// Execute - g++ .\arrays\io-algo-arr-ee2b3178.cpp -o .\output.exe; .\output.exe
