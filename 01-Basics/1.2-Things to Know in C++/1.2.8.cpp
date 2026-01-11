// Functions in C++ - Basic Examples

#include <iostream>
using namespace std;

/*
  FUNCTION TYPES:
  - void       -> Function that does NOT return anything
  - return     -> Function that returns a value (int, string, etc.)
  - parameterised     -> Function that accepts input parameters
  - non-parameterised -> Function that takes no parameters
*/

//********************************
// EXAMPLE 1: Non-Parameterised Function (No input, No return)
// This function takes no arguments and prints a fixed message

void printName()
{
  cout << "Hey";
}

int main()
{
  printName(); // Calling the function - Output: Hey
  return 0;
}

//***********************************
// EXAMPLE 2: Parameterised Function (With input, No return)
// This function accepts a 'name' parameter and uses it in output

void printName(string name)
{
  cout << "Hey " + name; // Concatenates "Hey " with the name passed
}

int main()
{
  string name;
  cout << "Enter your name: ";
  cin >> name; // Takes user input

  printName(name); // Passes 'name' as argument to the function
  return 0;
}

// *******************************
// EXAMPLE 3: Function with Multiple Variables
// Shows how to use multiple variables and pass any of them to a function

void printName(string name)
{
  cout << "Hey " + name << endl;
}

int main()
{
  string name;
  cout << "Enter your name: ";
  cin >> name; // First user input stored in 'name'

  string name2;
  cout << "Enter name2: ";
  cin >> name2; // Second user input stored in 'name2'

  printName(name2); // Passing 'name2' to the function instead of 'name'
  return 0;
}