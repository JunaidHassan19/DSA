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

//*****************************************************
// EXAMPLE 1: Non-Parameterised Function (No input, No return)
// This function takes no arguments and prints a fixed message

// void printName()
// {
//   cout << "Hey";
// }

// int main()
// {
//   printName(); // Calling the function - Output: Hey
//   return 0;
// }

// //****************************************************
// // EXAMPLE 2: Parameterised Function (With input, No return)
// // This function accepts a 'name' parameter and uses it in output

// void printName(string name)
// {
//   cout << "Hey " + name; // Concatenates "Hey " with the name passed
// }

// int main()
// {
//   string name;
//   cout << "Enter your name: ";
//   cin >> name; // Takes user input

//   printName(name); // Passes 'name' as argument to the function
//   return 0;
// }

// // ***************************************************
// // EXAMPLE 3: Function with Multiple Variables
// // Shows how to use multiple variables and pass any of them to a function

// void printName(string name)
// {
//   cout << "Hey " + name << endl;
// }

// int main()
// {
//   string name;
//   cout << "Enter your name: ";
//   cin >> name; // First user input stored in 'name'

//   string name2;
//   cout << "Enter name2: ";
//   cin >> name2; // Second user input stored in 'name2'

//   printName(name2); // Passing 'name2' to the function instead of 'name'
//   return 0;
// }

// ****************************************************
// EXAMPLE 4: Parameterised Function with Two Parameters
// This function takes two integer inputs and prints their sum
// Demonstrates: passing multiple parameters to a function

// void sum(int a, int b)
// {
//   int c = a + b;
//   cout << "The sum of " << a << " and " << b << " is " << c;
// }

// int main()
// {
//   int x;
//   cout << "Enter first number: ";
//   cin >> x; // First number input

//   int y;
//   cout << "Enter second number: ";
//   cin >> y; // Second number input

//   sum(x, y); // Passing both x and y as arguments to sum()

//   return 0;
// }

/*******************************************************/
// EXAMPLE 5: Finding Maximum of Two Numbers
// Demonstrates TWO different approaches:
//
// APPROACH 1 (void function - commented out):
// - Uses void return type, prints result directly
// - Cannot reuse the result in further calculations
//
// APPROACH 2 (return function - active):
// - Returns the maximum value to the caller
// - Result can be stored in a variable and reused

// APPROACH 1: void function (prints directly, no return)
// void maxx(int a, int b)
// {
//   if (a > b)
//     cout << a;
//   else
//     cout << b;
// }

// APPROACH 2: return function (returns value for flexibility)
// int max(int a, int b)
// {
//   if (a > b)
//     return a;
//   else
//     return b;
// }

// int main()
// {
//   int num1, num2;
//   cout << "Enter 2 numbers: ";
//   cin >> num1 >> num2;

//   // Using return function - can store result in variable
//   int maxinum = max(num1, num2);
//   cout << maxinum;

//   // Alternative: print directly without storing
//   // cout << max(num1, num2);

//   return 0;
// }

/*********************************************************/
// ======== Pass by Value===========
// When you pass a variable by value, the function receives a COPY of the variable
// Any changes made inside the function do NOT affect the original variable

// Demonstration with integer
void doSomething(int x)
{
  // 'x' is a COPY of 'num' from main(), not the original
  cout << x << endl; // Output: 10 (initial copy)
  x += 10;
  cout << x << endl; // Output: 20 (copy modified)
  x += 10;
  cout << x << endl; // Output: 30 (copy modified)
  x += 10;
  cout << x << endl; // Output: 40 (copy modified)
  x += 10;
  cout << x << endl; // Output: 50 (copy modified)
  // When function ends, this copy 'x' is destroyed
}

int main()
{
  int num = 10;
  doSomething(num);    // Passes a COPY of 'num' (value 10)
  cout << num << endl; // Output: 10 (original unchanged!)
  // KEY INSIGHT: 'num' is still 10 because only the copy was modified

  return 0;
}

/*********************************************************/
// EXAMPLE 7: Pass by Value with Strings
// Same concept applies to strings - function receives a copy

// void doSomething(string j)
// {
//   // 'j' is a COPY of the string from main()
//   j[0] = 's';           // Modifying first character of the COPY
//   cout << j << endl;    // Output: "sunni" (copy is modified)
// }

// int main()
// {
//   string j = "junni";
//   doSomething(j);       // Passes a COPY of string "junni"
//   cout << j << endl;    // Output: "junni" (original unchanged!)
//   // KEY INSIGHT: Original string remains "junni" because only copy was changed
//   return 0;
// }

/*
  SUMMARY - Pass by Value:
  ========================
  1. A COPY of the variable is passed to the function
  2. Changes inside the function only affect the copy
  3. Original variable in the calling function remains UNCHANGED
  4. Useful when you don't want to modify the original data

  To modify original variable, use "Pass by Reference" (with & symbol)
*/