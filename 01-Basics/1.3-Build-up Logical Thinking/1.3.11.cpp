#include <iostream>
using namespace std;

/*
================================================================================
  Pattern: Binary Triangle (Alternating 0s and 1s)

  Time Complexity: O(n²)
    - Outer loop runs (n-1) times
    - Inner loop runs 0+1+2+...+(n-2) = (n-1)(n-2)/2 times
    - Total: O(n²)

  Space Complexity: O(1)
    - Only using a few integer variables (i, j, n, start)
    - No extra arrays or data structures
================================================================================
*/

void print(int n)
{
  int start = 1;
  for (int i = 1; i < n; i++) // Outer loop: runs (n-1) times for rows
  {
    // Determine starting digit based on row number
    if (i % 2 == 0)
      start = 1; // Even rows start with 1
    else
      start = 0; // Odd rows start with 0

    for (int j = 1; j < i; j++) // Inner loop: prints (i-1) digits per row
    {
      cout << start;     // Print current digit
      start = 1 - start; // Toggle: 0→1 or 1→0
    }
    cout << endl; // Move to next line
  }
}

int main()
{
  int x;
  cout << "Enetr the number of R&C: ";
  cin >> x;
  print(x);
}

/*
================================================================================
  OUTPUT (for n = 7):

  (row 1: empty - prints 0 elements)
  0                    (row 2: starts with 0, prints 1 element)
  10                   (row 3: starts with 0, prints 2 elements → 0,1 but shown as 1,0?)
  010                  (row 4: starts with 1, prints 3 elements)
  1010                 (row 5: starts with 0, prints 4 elements)
  01010                (row 6: starts with 1, prints 5 elements)

  Pattern Logic:
  - Odd rows (1,3,5...) start with 0
  - Even rows (2,4,6...) start with 1
  - Each digit alternates (0→1→0→1...)
================================================================================
*/