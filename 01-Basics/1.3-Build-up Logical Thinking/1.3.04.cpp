#include <iostream>
using namespace std;

void print(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << i << " ";
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

/*
Output (for n = 5):

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/