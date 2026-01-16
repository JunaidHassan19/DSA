#include <iostream>
using namespace std;

// Pattern: Reverse Alphabet Triangle (Ascending) | TC: O(n²) | SC: O(1)
void print(int n)
{
  for (int i = 1; i <= n; i++) // n rows
  {
    for (int j = 1; j <= n - i + 1; j++) // (n-i+1) letters per row, ascending
    {
      cout << (char)('A' - 1 + j) << " "; // Convert: 1→A, 2→B, 3→C...
    }
    cout << endl;
  }
}

int main()
{
  int x = 6;
  print(x);
}
/*
Output (n=6):
A B C D E F
A B C D E
A B C D
A B C
A B
A
*/
