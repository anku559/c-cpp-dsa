/*
[io-algo-num-d06bb6ad] [Number Palindrome]

Write a CPP program to check if a number is palindrome?
*/

/* Notes
Palindrome
  - A palindrome is a word, number, phrase, or other sequence of symbols that reads the same backwards as forwards, such as madam or racecar.
 */

/* Examples and Constraints

====================== [Example 1] ======================
Inputs - 121
Expected Output - Number is Palindrome

====================== [Example 2] ======================
Inputs - 1234
Expected Output - Number is not a Palindrome

====================== [Example 3] ======================
Inputs - 113311
Expected Output - Number is Palindrome
*/

#include <iostream>
#include <stdexcept>
using namespace std;

/**
Function `reverseNumber`: `num` => `int`
- num: int
#### Worst Case Scenarios
#### Average Case Scenarios
#### Best Case Scenarios
*/
int reverseNumber(int num) {
  if (num < 0) {
    throw invalid_argument("Number must be greater than 0.");
  }

  int reverse = 0;
  int numCopy = num;

  while (numCopy > 0) {
    int remainder = numCopy % 10;
    reverse = (reverse * 10) + remainder;
    numCopy /= 10;
  }

  return reverse;
}

string checkPalindrome(int num) {
  int reverse = reverseNumber(num);
  string output;

  if (num == reverse) {
    output = "Number is Palindrome";
  } else {
    output = "Number is not a Palindrome";
  }

  return output;
}

int main() {
  int num;
  cout << "Enter number: ";
  cin >> num;

  cout << checkPalindrome(num);
  return 0;
}
// Execute - g++ .\numbers\io-algo-num-d06bb6ad.cpp -o .\output.exe; .\output.exe
