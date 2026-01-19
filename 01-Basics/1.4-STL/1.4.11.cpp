/*
 * ============================================
 * VECTOR FUNCTIONS: size, pop_back, swap, clear, empty
 * ============================================
 *
 * size()    : returns number of elements
 * pop_back(): removes last element
 * swap()    : swaps contents of two vectors
 * clear()   : removes all elements
 * empty()   : checks if vector is empty
 *
 * Basic Example:
 *   vector<int> v = {10, 20, 30};
 *   v.pop_back();          // {10, 20}
 *   cout << v.size();      // 2
 */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> a = {10, 20, 30};
  vector<int> b = {99, 88};

  cout << "Size of a: " << a.size() << endl; // 3

  a.pop_back(); // remove last element
  cout << "After pop_back, a: ";
  for (int x : a)
    cout << x << " "; // {10, 20}
  cout << endl;

  a.swap(b); // swap contents
  cout << "After swap, a: ";
  for (int x : a)
    cout << x << " "; // {99, 88}
  cout << endl;

  a.clear();                                                                 // remove all elements
  cout << "After clear, a is empty? " << (a.empty() ? "Yes" : "No") << endl; // Yes

  return 0;
}
