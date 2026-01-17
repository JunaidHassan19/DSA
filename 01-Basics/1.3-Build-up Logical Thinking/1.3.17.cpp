#include <iostream>
using namespace std;

// ===== METHOD 1: Using Function =====
// Pattern: Same Letter Triangle | TC: O(n²) | SC: O(1)
void print(int n)
{
  for (int i = 0; i <= n; i++)
  {
    char ch = 'A' + i; // Row 0→'A', Row 1→'B'...
    for (int j = 0; j <= i; j++)
    {
      cout << ch << " ";
    }
    cout << endl;
  }
}

// ===== METHOD 2: Using Class =====
// Pattern: Same Letter Triangle | TC: O(n²) | SC: O(1)
class solution
{
public:
  void print(int n)
  {
    for (int i = 0; i <= n; i++) // (n+1) rows
    {
      char ch = 'A' + i;           // Row 0→'A', Row 1→'B', Row 2→'C'...
      for (int j = 0; j <= i; j++) // (i+1) times per row
      {
        cout << ch << " "; // Print same letter
      }
      cout << endl;
    }
  }
};

int main()
{
  int x = 5;

  cout << "Method 1 (Function):" << endl;
  print(x);

  cout << "\nMethod 2 (Class):" << endl;
  solution sol;
  sol.print(x);
}
/*
Output (n=5):
A
B B
C C C
D D D D
E E E E E
F F F F F F
*/