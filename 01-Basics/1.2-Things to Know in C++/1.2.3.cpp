#include <iostream>
using namespace std;
// Write a program that takes an input of age
// and print if you are adult or not.

int main()
{
  int x;
  cout << "Enter your age: ";
  cin >> x;

  if (x < 18)
  {
    cout << "You are minor.";
  }
  else
  {
    cout << "You are Adult";
  }

  return 0;
}