/*
 * ============================================
 * INSERT IN VECTOR (STL)
 * ============================================
 *
 * What does insert do?
 * - insert() adds element(s) at a given position.
 * - insert(pos, value) inserts one element.
 * - insert(pos, count, value) inserts multiple copies.
 * - insert(pos, first, last) inserts a range.
 *
 * Basic Example:
 *   vector<int> v = {10, 20, 30};
 *   v.insert(v.begin() + 1, 99); // v = {10, 99, 20, 30}
 */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> v = {10, 20, 30, 40};

  // Insert a single value at index 1
  v.insert(v.begin() + 1, 99); // v = {10, 99, 20, 30, 40}

  cout << "After insert: ";
  for (int x : v)
  {
    cout << x << " "; //{10, 99, 20, 30, 40}
  }
  cout << endl;

  return 0;
}
