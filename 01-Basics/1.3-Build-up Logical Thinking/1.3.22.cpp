#include <iostream>
using namespace std;

// Pattern: Hollow Rectangle / Square Border | TC: O(n²) | SC: O(1)
void print(int n)
{
  for (int i = 0; i < n; i++) // n rows
  {
    for (int j = 0; j < n; j++) // n columns
    {
      // Print '*' only on borders (first/last row or first/last column)
      if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
      {
        cout << "*";
      }
      else
        cout << " "; // Space for inside
    }
    cout << endl;
  }
}

int main()
{
  int x = 5;
  print(x);
}
/*
Output (n=5):
*****
*   *
*   *
*   *
*****

Logic:
- Print '*' when: i==0 (top), i==n-1 (bottom), j==0 (left), j==n-1 (right)
- Print ' ' for all interior cells
*/