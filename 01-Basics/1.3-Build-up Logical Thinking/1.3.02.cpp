#include <iostream>
using namespace std;

void print(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

int main()
{
  /*
  // This section allows running multiple test cases
  // t = number of test cases to run
  // For each test case, user enters 'n' (rows & columns)
  // and the right-angled triangle pattern is printed

  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    int n;
    cout << "Enter the number of R&C: ";
    cin >> n;
    print(n);
  }
  */
  int n;
  cout << "Enter the number of R&C: ";
  cin >> n;
  print(n);
}