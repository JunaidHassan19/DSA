#include <iostream>
using namespace std;

// ==================== Way 1: Using a Simple Function ====================
// This approach uses a standalone function to print a right-aligned triangle.
// - Uses 1-based indexing
// - First inner loop prints spaces for right alignment
// - Second inner loop prints stars with spaces
/*
void print(int n)
{

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
*/

// ==================== Way 2: Alternative Function (0-based indexing) ====================
// This approach uses 0-based indexing to achieve a similar pattern.
// - Prints spaces before and after the stars
// - Uses formula (2 * i + 1) for number of stars per row
// - Creates a more symmetric pyramid pattern
/*
void print(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    for (int j = 0; j < 2 * i + 1; j++)
    {
      cout << "*";
    }
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    cout << endl;
  }
}
*/

// ==================== Way 3: Using a Class (OOP Approach) ====================
// This approach encapsulates the logic inside a class.
// - Follows Object-Oriented Programming principles
// - Better for larger projects where code organization matters
// - The function is called through an object of the class

class solution
{
public:
  void print(int n)
  {
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= n - i; j++)
      {
        cout << " ";
      }
      for (int j = 1; j <= i; j++)
      {
        cout << "* ";
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

/*
Output (for n = 5):

    *
   * *
  * * *
 * * * *
* * * * *
*/