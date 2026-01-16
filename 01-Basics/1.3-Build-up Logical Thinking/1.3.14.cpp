#include <iostream>
using namespace std;

// Pattern: Alphabet Triangle | TC: O(n²) | SC: O(1)
void print(int n)
{
  for (int i = 1; i <= n; i++) // n rows
  {
    for (int j = 1; j < i; j++) // (i-1) letters per row
    {
      cout << (char)('A' + j - 1) << " "; // 'A'=65, so 'A'+0='A', 'A'+1='B'...
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
(empty)
A
A B
A B C
A B C D
*/