// This program calculates the amount of paint needed.

#include <iostream>

  int main()
{
  // One gallon of paint covers 340 square feet.

  int coverage = 340;
  int height = 6;
  int width = 100;

  // Calculate how many gallons of paint it will take to cover
  // the area with 2 coats of paint.
  double area = height * width * 2;
  double gallons = area / coverage;

  std::cout << "It will take " << gallons << " gallons of paint.\n";
  return 0;
}
