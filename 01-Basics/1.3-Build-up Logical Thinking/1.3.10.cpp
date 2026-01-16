#include <iostream>
using namespace std;

/*
// void print(int n)
// {
//   for (int i = 1; i <= 2 * n - 1; i++)
//   {
//     int stars = i;
//     if (i > n)
//       stars = 2 * n - i;
//     for (int j = 1; j <= stars; j++)
//     {
//       cout << "*";
//     }
//     cout << endl;
//   }
// }
class slotion
{
public:
  void print(int n)
  {
    for (int i = 1; i <= 2 * n - 1; i++)
    {
      int stars = i;
      if (i > n)
        stars = 2 * n - i;
      for (int j = 1; j <= stars; j++)
      {
        cout << "*";
      }
      cout << endl;
    }
  }
};
*/

/*
================================================================================
  Pattern: Diamond / Arrow Pattern (Left-Aligned)

  Time Complexity: O(n²)
    - First loop runs n times, inner loop runs 1+2+3+...+n = n(n+1)/2 times
    - Second loop runs (n-1) times, inner loop runs (n-1)+(n-2)+...+1 = n(n-1)/2 times
    - Total: O(n²)

  Space Complexity: O(1)
    - Only using a few integer variables (i, j, n)
    - No extra arrays or data structures
================================================================================
*/

class slotion
{
public:
  void print(int n)
  {
    // ===== UPPER HALF (Including middle row) =====
    // Prints increasing stars: 1, 2, 3, ..., n
    for (int i = 0; i < n; i++) // Outer loop: runs n times (rows 0 to n-1)
    {
      for (int j = 0; j < i + 1; j++) // Inner loop: prints (i+1) stars
      {
        cout << "*";
      }
      cout << endl; // Move to next line after each row
    }

    // ===== LOWER HALF =====
    // Prints decreasing stars: n-1, n-2, ..., 1
    for (int i = 1; i < n; i++) // Outer loop: runs (n-1) times (rows 1 to n-1)
    {
      for (int j = i; j < n; j++) // Inner loop: prints (n-i) stars
      {
        cout << "*";
      }
      cout << endl; // Move to next line after each row
    }
  }
};

int main()
{
  slotion sol;

  int x;
  cout << "Enter the number of R&C: ";
  cin >> x;
  sol.print(x);
}
/*
output

*
**
***
****
*****
******
*****
****
***
**
*

*/