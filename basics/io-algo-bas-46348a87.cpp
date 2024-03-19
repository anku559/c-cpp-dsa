/*
[io-algo-bas-46348a87] [Title]


*/

#include <math.h>

#include <cassert>
#include <iostream>
using namespace std;

/**
 * Formula - (b * h) / 2
 */
float areaOfTriangle(float base, float height) {
  return (base * height) / 2;
}

/**
 * Formula - pi * r * r
 */
float areaOfCircle(float radius) {
  return M_PI * radius * radius;
}

/**
 * Formula - 2(l+b)
 */
float perimeterOfRectangle(float length, float breadth) {
  return 2 * (length + breadth);
}

/**
 * Formula - (n * (n + 1)) / 2
 */
int sumNNaturalNumber(int number) {
  return (number * (number + 1)) / 2;
}

/**
 * Formula - (-b +|- sqrt(b^2 - 4ac)) / (2*a)
 */
struct Roots {
  float root1;
  float root2;
};

Roots rootQuadraticEquation(float a, float b, float c) {
  float discriminant = (b * b) - (4 * a * c);
  Roots roots;

  if (a == 0) {
    // If a is zero, it's not a quadratic equation
    roots.root1 = roots.root2 = NAN;  // Not a Number (indicating undefined)
  } else if (discriminant < 0) {
    // If the discriminant is negative, there are no real roots
    roots.root1 = roots.root2 = NAN;  // Not a Number (indicating undefined)
  } else {
    // Calculate the real roots
    roots.root1 = (-b + sqrt(discriminant)) / (2 * a);
    roots.root2 = (-b - sqrt(discriminant)) / (2 * a);
  }

  return roots;
}

int main() {
  /*
  Roots eq = rootQuadraticEquation(1, -3, 2);  // x^2 - 3x + 2 = 0 => (x-1)(x-2) => roots: 1, 2
  cout << eq.root1;
  cout << eq.root2;
  */

  return 0;
}

// Execute - g++ .\basics\io-algo-bas-46348a87.cpp -o .\output.exe; .\output.exe