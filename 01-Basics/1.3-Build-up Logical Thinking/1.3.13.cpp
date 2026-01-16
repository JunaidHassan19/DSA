#include <iostream>
using namespace std;

/*
================================================================================
  Pattern: Floyd's Triangle (Continuous Numbers)

  Time Complexity: O(n²)
    - Outer loop runs n times
    - Inner loop runs 1+2+3+...+n = n(n+1)/2 times
    - Total: O(n²)

  Space Complexity: O(1)
    - Only using a few integer variables (i, j, n, num)
    - No extra arrays or data structures
================================================================================
*/

class solution
{
public:
  void print(int n)
  {
    int num = 1; // Starting number (increments continuously)

    for (int i = 1; i <= n; i++) // Outer loop: runs n times for rows
    {
      for (int j = 1; j <= i; j++) // Inner loop: prints i numbers per row
      {
        cout << num << " "; // Print current number with space
        num = num + 1;      // Increment for next number
      }
      cout << endl; // Move to next line
    }
  }
};

int main()
{
  solution sol;
  int x = 6;
  sol.print(x);
}

/*
================================================================================
  OUTPUT (for n = 6):

  1
  2 3
  4 5 6
  7 8 9 10
  11 12 13 14 15
  16 17 18 19 20 21

  Pattern Logic:
  - Numbers start from 1 and increment continuously
  - Row 1: 1 number
  - Row 2: 2 numbers
  - Row 3: 3 numbers
  - ...
  - Row n: n numbers
  - Total numbers printed: n(n+1)/2
================================================================================
*/