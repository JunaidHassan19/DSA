#include <iostream>
using namespace std;
// Pattern Printing Rules:
// 1. Outer loop: Controls the number of rows (iterates x times)
// 2. Inner loop: Controls the number of columns per row (iterates y times)
// 3. Print the character "*" inside the inner loop for each column

/*
int main()
{
  // int x, y;
  // cout << "Enter the number of Rows: ";
  // cin >> x;
  // cout << "Enter the number of Colunm: ";
  // cin >> y;
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
*/

void print(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

int main()
{
  int n;
  cout << "Enter the number of R&C: ";
  cin >> n;
  print(n);
}
/*
Output (for n = 4):

****
****
****
****
*/