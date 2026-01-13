#include <iostream>
using namespace std;

// ==================== Way 1: Using a Simple Function ====================
// This approach uses a standalone function to print the pattern.
// - Simple and straightforward
// - Good for small programs or quick solutions
// - The function is called directly from main()

void print(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i + 1; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}

int main()
{
  int x;
  cout << "Enter the number of R&C: ";
  cin >> x;

  print(x);
}

// ==================== Way 2: Using a Class (OOP Approach) ====================
// This approach encapsulates the logic inside a class.
// - Follows Object-Oriented Programming principles
// - Better for larger projects where code organization matters
// - The function is called through an object of the class
/*
class solution
{
public:
  void print(int n)
  {
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= n - i + 1; j++)
      {
        cout << j << " ";
      }
      cout << endl;
    }
  }
};

int main()
{
  solution sol;

  int x;
  cout << "Enter the number of R&C: ";
  cin >> x;

  sol.print(x);
}
*/

/*
Output (for n = 5):

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/