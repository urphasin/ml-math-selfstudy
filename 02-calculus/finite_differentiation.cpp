#include <iostream>
#include <iomanip>
#include <cmath>

// Define the function to differentiate
double function(double x) {
  return x * x + 2 * x + 1;
}

// Compute derivative using central difference method
double derivative(double x, double h = 0.1) {
  return (function(x + h) - function(x - h)) / (2 * h);
}

int main() {
  double x;
  std::cout << "Enter the value of x to compute the derivative: ";
  std::cin >> x;

  // Compute and display the derivative
  double result = derivative(x);
  std::cout << "The derivative of f(x) at x = " << x << " is approximately " << result << std::endl;

  // For verification, the analytical derivative of f(x) = x^2 + 2x + 1 is f'(x) = 2x + 2
  double analytical = 2 * x + 2;
  std::cout << "Analytical derivative (for comparison): " << analytical << std::endl;

  return 0;
}
