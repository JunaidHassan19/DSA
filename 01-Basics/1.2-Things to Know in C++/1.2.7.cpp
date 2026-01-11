// Basic Loops in C++: For Loop, While Loop, Do-While Loop

#include <iostream>
using namespace std;

int main()
{

  /****for loop basic****/
  // Executes a block of code a specific number of times
  // Syntax: for(initialization; condition; increment/decrement)

  // for (int i = 1; i <= 50; i++)
  // {
  //   // cout << "DSA" << endl;
  //   cout << i << " ";
  // }

  int i;
  for (i = 1; i <= 50; i++)
  {
    cout << "DSA" << i << " ";
    // cout << i << " ";
  }

  cout << endl;

  /****While loop basic****** */
  // Executes a block of code as long as the condition is true
  // Condition is checked BEFORE entering the loop
  // Syntax: while(condition) { code }

  int j = 1;
  while (j <= 10)
  {
    cout << "Hello DSA" << j << " ";
    j++;
  }

  cout << endl;

  /*****do while*****/
  // Executes a block of code at least ONCE, then repeats as long as condition is true
  // Condition is checked AFTER executing the loop body
  // Syntax: do { code } while(condition);

  int k = 2;
  do
  {
    cout << "Hello DSA" << k << " ";
    k++;
  } while (k <= 1);

  return 0;
}