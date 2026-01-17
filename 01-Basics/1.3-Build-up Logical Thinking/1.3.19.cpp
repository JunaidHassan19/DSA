#include <iostream>
using namespace std;
/*
class solution
{
public:
  void print(int n)
  {
    // Initial spaces for the upper half
    int iniS = 0;

    // For loop upper half rows
    for (int i = 0; i <= n; i++)
    {

      // Print stars on left
      for (int j = 1; j <= n - i; j++)
      {
        cout << "*";
      }
      // print spaces in middle
      for (int j = 0; j < iniS; j++)
      {
        cout << " ";
      }
      // Print stars on right
      for (int j = 1; j <= n - i; j++)
      {
        cout << "*";
      }
      // Increase middle spaces by 2
      iniS += 2;
      cout << endl;
    }

    // Initial spases for lower half
    iniS = 2 * n - 2;

    // Loop for lower half rowa
    for (int i = 1; i <= n; i++)
    {
      // Print stats on left
      for (int j = 1; j <= i; j++)
      {
        cout << "*";
      }
      // Print Spaces on middle
      for (int j = 0; j < iniS; j++)
      {
        cout << " ";
      }
      // Print stars on right
      for (int j = 1; j <= i; j++)
      {
        cout << "*";
      }
      // Decrease middle spaces by 2
      iniS -= 2;
      // Move to next line
      cout << endl;
    }
  }
};
*/

// Pattern: Hourglass / Butterfly | TC: O(n²) | SC: O(1)
class solution
{
public:
  void print(int n)
  {
    int iniS = 0; // Initial middle spaces

    // ===== UPPER HALF (Inverted triangle) =====
    for (int i = 0; i <= n; i++)
    {
      // Stars on left (decreasing)
      for (int j = 1; j <= n - i; j++)
      {
        cout << "*";
      }

      // Spaces in middle (increasing)
      for (int j = 0; j < iniS; j++)
      {
        cout << " ";
      }

      // Stars on right (decreasing)
      for (int j = 1; j <= n - i; j++)
      {
        cout << "*";
      }

      iniS += 2; // Increase spaces by 2 each row
      cout << endl;
    }

    // ===== LOWER HALF (Normal triangle) =====
    iniS = 2 * n - 2; // Reset spaces for lower half
    for (int i = 1; i <= n; i++)
    {
      // Stars on left (increasing)
      for (int j = 1; j <= i; j++)
      {
        cout << "*";
      }

      // Spaces in middle (decreasing)
      for (int j = 0; j < iniS; j++)
      {
        cout << " ";
      }

      // Stars on right (increasing)
      for (int j = 1; j <= i; j++)
      {
        cout << "*";
      }

      iniS -= 2; // Decrease spaces by 2 each row
      cout << endl;
    }
  }
};

int main()
{
  solution sol;
  int x = 5;
  sol.print(x);
}
/*
Output (n=5):
**********
****  ****
***    ***
**      **
*        *

*        *
**      **
***    ***
****  ****
**********
*/