/*
[io-algo-num-8023ea1f] [Single Digit Words]

Write a CPP program to converts each digit of a number into words?
*/

/* Notes
Mental Model - 123 => Reverse a Number => 321 => Reverse and Print
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
#include <stdexcept>
using namespace std;

string word(int digit) {
  string word;

  switch (digit) {
    case 1:
      word = "one";
      break;
    case 2:
      word = "two";
      break;
    case 3:
      word = "three";
      break;
    case 4:
      word = "four";
      break;
    case 5:
      word = "five";
      break;
    case 6:
      word = "six";
      break;
    case 7:
      word = "seven";
      break;
    case 8:
      word = "eight";
      break;
    case 9:
      word = "nine";
      break;
    default:
      word = "";
      break;
  }

  return word;
}

int reverseNumber(int num) {
  if (num < 0) {
    throw invalid_argument("Number must be greater than 0.");
  }

  int numCopy = num;
  int output = 0;

  while (numCopy > 0) {
    int remainder = numCopy % 10;
    output = (output * 10) + remainder;
    numCopy /= 10;
  }
  return output;
}

string numberToWord(int givenNumber) {
  int reversed = reverseNumber(givenNumber);
  string output = "";

  while (reversed > 0) {
    int remainder = reversed % 10;
    output += word(remainder) + " ";
    reversed /= 10;
  }

  return output;
}

int main() {
  int num;
  cout << "Enter number: ";
  cin >> num;

  cout << numberToWord(num);
  return 0;
}

// Execute - g++ .\numbers\io-algo-num-8023ea1f.cpp -o .\output.exe; .\output.exe