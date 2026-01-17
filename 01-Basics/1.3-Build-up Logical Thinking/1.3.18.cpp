#include <bits/stdc++.h>
using namespace std;

// Pattern: Right-Aligned Alphabet Triangle | TC: O(n²) | SC: O(1)
class Solution
{
public:
  void print(int N)
  {
    for (int i = 0; i < N; i++) // N rows
    {
      // Start from a different letter each row, end at same letter (E)
      // Row 0: E, Row 1: D E, Row 2: C D E, etc.
      for (char ch = ('A' + N - 1) - i; ch <= ('A' + N - 1); ch++)
      {
        cout << ch << " ";
      }
      cout << endl;
    }
  }
};

int main()
{
  Solution sol;
  int N = 5;
  sol.print(N);
  return 0;
}
/*
Output (N=5):
E
D E
C D E
B C D E
A B C D E

Logic:
- Row 0: starts at E (A+4), prints 1 letter
- Row 1: starts at D (A+3), prints 2 letters
- Row i: starts at (A+N-1-i), ends at (A+N-1)
- Each row ends at the same letter (E for N=5)
*/
