#include <iostream>
using namespace std;

// Pattern: Butterfly / Bow Tie | TC: O(n²) | SC: O(1)
class solution
{
public:
  void print(int n)
  {
    int spaces = 2 * n - 2; // Initial middle spaces

    for (int i = 1; i <= 2 * n - 1; i++) // Total (2n-1) rows
    {
      int stars = i;
      if (i > n)
        stars = 2 * n - i; // Mirror: after midpoint, decrease stars

      // Stars on left
      for (int j = 1; j <= stars; j++)
      {
        cout << "*";
      }

      // Spaces in middle
      for (int j = 1; j <= spaces; j++)
      {
        cout << " ";
      }

      // Stars on right
      for (int j = 1; j <= stars; j++)
      {
        cout << "*";
      }
      cout << endl;

      // Adjust spaces: decrease until midpoint, then increase
      if (i < n)
        spaces -= 2;
      else
        spaces += 2;
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
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

Logic:
- Upper half: stars increase (1→n), spaces decrease
- Middle row: maximum stars (n+n), no spaces
- Lower half: stars decrease (n→1), spaces increase
*/