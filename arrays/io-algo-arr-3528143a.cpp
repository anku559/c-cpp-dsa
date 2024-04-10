/*
[io-algo-arr-3528143a] [Largest and Smallest element in Array]

Write a CPP program to find largest and smallest number in an array?
*/

/* Notes
 */

/* Examples and Constraints

====================== [Example 1] ======================
Inputs - [10, 20, 30, 40, 50]
Expected Output - Largest - 50, Smallest - 10

====================== [Example 2] ======================
Inputs - [11, 22, 33, 44, 55]
Expected Output - Largest - 55, Smallest - 11

====================== [Example 3] ======================
Inputs - [1.5, 5.4, 4.4, 6.8, 9.5]
Expected Output - Largest - 9.5, Smallest - 1.5

===================== [Constraints] =====================
*/

#include <iostream>
using namespace std;

struct LargestSmallest {
  int largest;
  int smallest;
};

LargestSmallest findInIntArray(int arr[], int size) {
  LargestSmallest output;
  int largest = arr[0];
  int smallest = arr[0];

  for (int i = 0; i < size; i++) {
    if (arr[i] > largest) {
      largest = arr[i];
    }

    if (arr[i] < smallest) {
      smallest = arr[i];
    }
  }

  output.largest = largest;
  output.smallest = smallest;
  return output;
}

int main() {
  int arr1[5] = {11, 22, 33, 44, 55};

  cout << "Largest: " << findInIntArray(arr1, sizeof(arr1) / sizeof(int)).largest << endl;
  cout << "Smallest: " << findInIntArray(arr1, sizeof(arr1) / sizeof(int)).smallest << endl;
  return 0;
}

// Execute - g++ .\arrays\io-algo-arr-3528143a.cpp -o .\output.exe; .\output.exe
