/*
[io-algo-arr-ca416af6] [Linear Search]

Write a CPP program to find element in an array (Linear Search)?
*/

/* Notes
 */

/* Examples and Constraints

====================== [Example 1] ======================
Inputs - [10, 20, 30, 40, 50]
Element to Find - 40
Expected Output - 3

====================== [Example 2] ======================
Inputs - [11, 22, 33, 44, 55]
Element to Find - 33
Expected Output - 2

====================== [Example 3] ======================
Inputs - [45, 54, 44, 68, 95]
Element to Find - 10
Expected Output - -1

===================== [Constraints] =====================
*/

#include <iostream>
using namespace std;

/**
Function `linearSearch`: `arr[]`, `size`, `element` => `int`
- arr[]: int[]
- size: int
- element: int

#### Worst Case Scenarios - O(n)
- n is the size of the array (element is not found or is at the end of the array)
#### Average Case Scenarios - O(n)
- element is found in the middle of the array
#### Best Case Scenarios - O(1)
- element is found at the first index of the array.
*/
int linearSearch(int arr[], int size, int element) {
  int index = -1;

  for (int i = 0; i < size; i++) {
    if (arr[i] == element) {
      index = i;
      break;
    }
  }

  return index;
}

int main() {
  int arr[] = {10, 20, 30, 40, 50};

  cout << linearSearch(arr, sizeof(arr) / sizeof(int), 40);
  return 0;
}

// Execute - g++ .\arrays\io-algo-arr-ca416af6.cpp -o .\output.exe; .\output.exe
