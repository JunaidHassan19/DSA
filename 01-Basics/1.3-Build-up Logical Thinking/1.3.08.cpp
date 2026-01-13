#include <iostream>
using namespace std;

/*
void print(int n)
{

  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < i; j++)
  //   {
  //     cout << " ";
  //   }
  //   for (int j = 0; j < 2 * n - (2 * i + 1); j++)
  //   {
  //     cout << "*";
  //   }
  //   for (int j = 0; j < i; j++)
  //   {
  //     cout << " ";
  //   }
  //   cout << endl;
  // }



  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    for (int j = 0; j < 2 * n - (2 * i + 1); j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
*/

class solution
{
public:
  void print(int n)
  {
    for (int i = 0; i <= n; i++)
    {
      for (int j = 0; j < i; j++)
      {
        cout << " ";
      }
      for (int j = 0; j < 2 * n - (2 * i + 1); j++)
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