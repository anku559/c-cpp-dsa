/*
[io-algo-num-d148f8b5] [Prime Numbers]

Write a CPP program to that checks a given number is Prime or not?
*/

/* Notes
If a number is divisible by 1 and itself
- eg: 2, 3, 5, 7, 11, 13, 17

Why 1 is not Prime Number?
- 1 has only 1 factor.
- For a number to be classified as a prime number, it should have exactly two factors.
- Since 1 has less than two factors, it is not a prime number.

Mental Model - Dividing number by all the smaller numbers and check if it is divided by 1 and itself
 */

/* Examples and Constraints

====================== [Example 1] ======================
Inputs - 4
Expected Output - Not a Prime Number

====================== [Example 2] ======================
Inputs - 17
Expected Output - Prime Number

====================== [Example 3] ======================
Inputs - 19
Expected Output - Prime Number
*/

#include <iostream>
#include <stdexcept>

using namespace std;

string checkPrimeNumber(int num) {
  if (num < 0) {
    throw invalid_argument("Number must be positive");
  }

  if (num == 1) {
    return "1 is not a prime number";
  }

  string output;

  for (int i = 2; i < num; i++) {
    if (num % i == 0) {
      output = "Not a Prime number";
      break;
    } else {
      output = "Prime number";
    }
  }

  return output;

  /*
  Time Complexity and Cases (checkPrimeNumber)
    - Worst Case Scenarios - Linear Growth O(n)
    - Average Case Scenarios - Linear Growth O(n)
      - Iteration till square root (less loop iteration)
    - Best Case Scenarios - Constant Growth O(1)
      - if the input is (1) or (2)
  */
}

int main() {
  int num;
  cout << "Enter number: ";
  cin >> num;
  cout << checkPrimeNumber(num);
  return 0;
}

/* -------------------------------------------------------------------------- */
/*                             Other Code Samples                             */
/* -------------------------------------------------------------------------- */

/*
// Iteration till square root (less loop iteration)
// Less Loop Iteration
  - Every number that's not a prime number has a product that consists of two factors a and b that are both neither 1 or the number itself
  - At least one factor is smaller or equal to the square root of the number

bool checkPrime(int n) {
  for (int i = 2; i < Math.sqrt(n); i += 1) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}


// [Another Way] - By maintaining count

{
  int n, count = 0;
  cout << "Enter number: ";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    if (n % i == 0)
      count++;
  }

  if (count == 2) {
    cout << "Prime Number";
  } else {
    cout << "Not a Prime Number";
  }
}
*/

// Execute - g++ .\numbers\io-algo-num-d148f8b5.cpp -o .\output.exe; .\output.exe