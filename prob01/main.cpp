// This program tests output on the ASCII character set, and on the sizeof operator.

#include <iostream>

int main()
{
  // TODO#1: try changing these values to others found in the ASCII character set
  // The class Quick Reference Guide contains this chart on page 5
  char my_char1 = 68;   // decimal
  char my_char2 = 0x44; // hex
  char my_char3 = 'D';  // character

  std::cout << "Char1: " << my_char1 << std::endl;
  std::cout << "Char2: " << my_char2 << std::endl;
  std::cout << "Char3: " << my_char3 << std::endl;

  std::cout << std::endl; // blank line to separate the different exercises

  // TODO#2: the following statement displays a plus sign
  // add 3 more cout statements that all print the same thing - a plus sign
  // however, use a different method to do so for each cout statement
  // hint: use the ASCII character set
char plus1 = 43;
char plus2 = 0x2B;
char plus3 = '+';

  std::cout << "+" << std::endl;
  std::cout << plus1 << '\n';
  std::cout << plus2 << '\n';
  std::cout << plus3 << '\n';

  std::cout << std::endl; // blank line to separate the different exercises

  // TODO#3: update the following statement to include escape characters
  // note that clang does not require an escape character on the single quote
  // but many other compilers do require it
  std::cout << "\'Y\'" << '\n' ;

  std::cout << std::endl; // blank line to separate the different exercises

  // TODO#4: try changing the variable types and the data types in the
  // statements below to see what is returned by the sizeof operator
  bool my_bool = 0;
  std::cout << my_bool << ' ' << sizeof(my_bool) << '\n';
  long my_int = 1;
  std::cout << my_int << ' ' << sizeof(my_int) << '\n';

  double amount;
  std::cout << "A float is stored in " << sizeof(float) << " bytes\n";
  std::cout << "The variable \"amount\" is stored in " << sizeof(amount) << " bytes\n";

  return 0;
}
