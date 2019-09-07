// This program calculates a person's height in feet (') and inches (").

  #include <iostream>

    int main()
  {
    // Ask for height in inches
  std::cout << "Enter person's height in inches: ";
  int  inchheight;
  std::cin >> inchheight;

  // Convert the height to feet and inches
  double feet = inchheight / 12;
  int inches = inchheight % 12;

std::cout << "This person is " << feet <<"'" << inches <<"\" in height.\n";

  return 0;
  }
// modulus operator %
