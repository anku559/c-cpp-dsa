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

struct Roots {
  float root1;
  float root2;
};

/**
 * Formula - (-b +|- sqrt(b^2 - 4ac)) / (2*a)
 */
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

/**
 * Formula - s (displacement) = ((v * v) - (u * u)) / (2*a)
 */
float findSpeed(float initVelocity, float finalVelocity, float acceleration) {
  return ((finalVelocity * finalVelocity) - (initVelocity * initVelocity)) / (2 * acceleration);
}

/**
 * Formula - (p * r * t) / 100
 * Rate - in percentage
 * Time - in years
 */
float calculateSimpleInterest(float principal, float rate, float time) {
  return (principal * rate * time) / 100.0;
}

/**
 * Formula - p * (1 + (r / 100) ^ t)
 * Rate - in percentage
 * Time - in years
 */
float calculateCompoundInterest(float principal, float rate, int time) {
  // Rate to a decimal
  float rateDecimal = rate / 100.0;

  // Amount after interest
  float amount = principal * (pow((1 + rateDecimal), time));
  float compoundInterest = amount - principal;

  return compoundInterest;
}

int main() {
  /*
  Roots eq = rootQuadraticEquation(1, -3, 2);  // x^2 - 3x + 2 = 0 => (x-1)(x-2) => roots: 1, 2
  cout << eq.root1;
  cout << eq.root2;

  cout << findSpeed(10, 40, 3);

  cout << calculateSimpleInterest(50000, 8, 1);

  cout << calculateCompoundInterest(50000, 8, 2);
  */

  return 0;
}

// Execute - g++ .\basics\io-algo-bas-46348a87.cpp -o .\output.exe; .\output.exe