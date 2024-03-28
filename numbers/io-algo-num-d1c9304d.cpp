/*
[io-algo-num-d1c9304d] [Sum till n]

Write a CPP program which sums up all the given numbers till n?
*/

/* Notes
Sum of N natural numbers formula - (n * (n + 1)) / 2

*/

/* Examples and Constraints

====================== [Example 1] ======================
Inputs - 10
Expected Output - 55

====================== [Example 2] ======================
Inputs - 50
Expected Output - 1275

====================== [Example 3] ======================
Inputs - 100
Expected Output - 5050

===================== [Constraints] =====================
- Integer Overflow - If the value of input (n) is too large instead of int using long long to mitigate this issue as the numbers may exceed the maximum value representable by int
- Range of Input - Only non-negative integer
- Memory Constraints
- Performance - Formula based approach is more efficient in terms of performance
- Compiler and Platform Dependency - 32 bits and 64 bits behaviors
*/

/**
 * Calculates the sum of integers from 1 to n using a loop
 */
long long sumTillN(int n) {
  long long output = 0;
  for (unsigned int i = 1; i <= n; i++) {
    output += i;
  }
  return output;

  /*
  Time Complexity and Cases (sumTillN)
    - Worst Case Scenarios - Linear Growth O(n)
      - when n is very large
    - Average Case Scenarios - Linear Growth O(n)
    - Best Case Scenarios - Constant Growth O(1)
      - when n is 1 (loop executes only once)
  */
}

/**
 * Calculates the sum of integers from 1 to n using the formula (n * (n + 1)) / 2
 */
long long sumTillNFormula(int n) {
  long long output = (static_cast<long long>(n) * (n + 1)) / 2;
  return output;

  /*
  Time Complexity and Cases (sumTillNFormula)
    - Worst Case Scenarios - Constant Growth O(1)
    - Average Case Scenarios - Constant Growth O(1)
    - Best Case Scenarios - Constant Growth O(1)
  */
}

#include <iostream>
using namespace std;

int main() {
  cout << "Linear Growth O(n)" << endl;
  cout << "Sum till 10: " << sumTillN(10) << endl;
  cout << "Sum till 50: " << sumTillN(50) << endl;
  cout << "Sum till 100: " << sumTillN(100) << endl;

  cout << "Constant Growth O(1)" << endl;
  cout << "Sum till 10: " << sumTillNFormula(10) << endl;
  cout << "Sum till 50: " << sumTillNFormula(50) << endl;
  cout << "Sum till 100: " << sumTillNFormula(100) << endl;
  return 0;
}

/*
---------- [Improvements (Lowest Possible Time Complexity)] ---------
- Using Formula - (n * (n + 1)) / 2

---------- [Improvements (Lowest Possible Space Complexity)] --------
*/

// Execute - g++ .\numbers\io-algo-num-d1c9304d.cpp -o .\output.exe; .\output.exe
