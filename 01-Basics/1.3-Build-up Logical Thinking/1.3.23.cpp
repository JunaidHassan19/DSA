#include <bits/stdc++.h>
using namespace std;

// Pattern: Number Frame / Concentric Rectangles | TC: O(n²) | SC: O(1)
class Solution
{
public:
  void pattern22(int n)
  {
    // Outer loop for rows (2n-1 total)
    for (int i = 0; i < 2 * n - 1; i++)
    {
      // Inner loop for columns (2n-1 total)
      for (int j = 0; j < 2 * n - 1; j++)
      {
        int top = i;                  // Distance from top edge
        int left = j;                 // Distance from left edge
        int bottom = (2 * n - 2) - i; // Distance from bottom edge
        int right = (2 * n - 2) - j;  // Distance from right edge

        // Minimum distance determines which "ring" we're in
        int minDist = min(min(top, bottom), min(left, right));

        // Print number: outer ring = n, next = n-1, ..., center = 1
        cout << (n - minDist) << " ";
      }
      cout << endl;
    }
  }
};

int main()
{
  Solution sol;
  int N = 5;
  sol.pattern22(N);
  return 0;
}
/*
Output (N=5):
5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5

Logic:
- Forms concentric rectangular rings
- Outer border = n, each inner ring decreases by 1
- Center = 1
- Uses minimum distance from any edge to determine ring number
*/
