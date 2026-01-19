/*
 * ============================================
 * AUTO KEYWORD IN C++
 * ============================================
 *
 * What is auto?
 * - auto lets the compiler deduce the type automatically.
 * - It is useful for iterators and long type names.
 * - It improves readability and reduces typing.
 *
 * Basic Example:
 *   vector<int> v = {10, 20, 30};
 *   for (auto x : v) cout << x << " ";
 */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> v = {10, 20, 30, 40};

  // auto deduces the type of each element in the vector
  cout << "Vector elements: ";
  for (auto x : v)
  {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}
