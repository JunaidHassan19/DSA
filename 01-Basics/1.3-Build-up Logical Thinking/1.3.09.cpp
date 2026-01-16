#include <iostream>
using namespace std;

class solution
{
public:
  void print(int n)
  {
    // Upper half of diamond (including middle row)
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
      cout << endl;
    }

    // Lower half of diamond
    for (int i = n - 1; i >= 0; i--)
    {
      for (int j = 0; j < n - i - 1; j++)
      {
        cout << " ";
      }
      for (int j = 0; j < 2 * i + 1; j++)
      {
        cout << "*";
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
  // print(x);
  sol.print(x);
}
/*
Output (for n = 5):
    *
   ***
  *****
 *******
 *******
  *****
   ***
    *
*/