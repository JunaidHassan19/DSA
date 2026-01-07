#include <iostream>
using namespace std;

int main()
{
  // Output - printing to console
  cout << "Hello, World!" << endl;

  // Input - reading from console
  int x;
  cout << "Enter the value of X: " << endl;
  cin >> x;
  cout << "You entered: " << x << endl;

  string str;
  int x;
  cout << "Enter your name: ";
  cin >> str;

  cout << "Enter your age: ";
  cin >> x;

  cout << "Hello! " << str << " you are " << x << " years old " << endl;

  return 0;
}
