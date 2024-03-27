/*
[io-algo-bas-13ee29d0] [Multiplication Table]

Write a CPP program to print multiplication table of the number n?
*/

#include <iostream>
#include <stdexcept>

using namespace std;

void printMultiplicationTable(int number, int limit) {
  if (number > 99999) {
    throw invalid_argument("Number should not be greater than 99999");
  }
  if (limit > 100) {
    throw invalid_argument("Limit should not be greater than 100");
  }

  for (int i = 1; i <= limit; i++) {
    cout << number << " X " << i << " = " << number * i << endl;
  }
}

int main() {
  int tableLimit = 100;
  printMultiplicationTable(99999, tableLimit);
  return 0;
}

// Execute - g++ .\basics\io-algo-bas-13ee29d0.cpp -o .\output.exe; .\output.exe