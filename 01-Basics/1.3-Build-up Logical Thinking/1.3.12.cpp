#include <iostream>
using namespace std;

/*
================================================================================
  Pattern: Number Butterfly / Hourglass Numbers

  Time Complexity: O(n²)
    - Outer loop runs (n-1) times
    - Inner loops combined run O(n) times per row
    - Total: O(n²)

  Space Complexity: O(1)
    - Only using a few integer variables (i, j, n, space)
    - No extra arrays or data structures
================================================================================
*/

void print(int n)
{
  int space = 2 * (n - 1); // Initial spaces between left and right numbers

  for (int i = 1; i < n; i++) // Outer loop: runs (n-1) rows
  {
    // ===== LEFT NUMBERS (Ascending: 1 to i) =====
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }

    // ===== MIDDLE SPACES =====
    for (int j = 1; j <= space; j++) // Print spaces between left and right numbers
    {
      cout << " ";
    }

    // ===== RIGHT NUMBERS (Descending: i to 1) =====
    for (int j = i; j >= 1; j--)
    {
      cout << j;
    }

    cout << endl; // Move to next line
    space -= 2;   // Reduce spaces by 2 for each row
  }
}

int main()
{
  int x = 7;
  print(x);
}

/*
================================================================================
  OUTPUT (for n = 7):

  1            1       (row 1: 12 spaces in middle)
  12          21       (row 2: 10 spaces in middle)
  123        321       (row 3: 8 spaces in middle)
  1234      4321       (row 4: 6 spaces in middle)
  12345    54321       (row 5: 4 spaces in middle)
  123456  654321       (row 6: 2 spaces in middle)

  Pattern Logic:
  - Left side: prints 1,2,3,...,i (ascending)
  - Middle: decreasing spaces (starts at 2*(n-1), decreases by 2 each row)
  - Right side: prints i,i-1,...,1 (descending - mirror of left)
================================================================================
*/