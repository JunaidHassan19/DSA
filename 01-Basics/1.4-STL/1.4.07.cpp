/*
 * ============================================
 * ERASE IN VECTOR (STL)
 * ============================================
 *
 * What does erase do?
 * - erase() removes element(s) from a vector by position.
 * - erase(pos) removes one element at iterator pos.
 * - erase(first, last) removes a range [first, last).
 *
 * Basic Example:
 *   vector<int> v = {10, 20, 30, 40};
 *   v.erase(v.begin() + 1);      // removes 20
 *   v.erase(v.begin(), v.begin() + 2); // removes first two elements
 */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> v = {10, 20, 30, 40, 50};

  // Remove element at index 1 (value 20)
  v.erase(v.begin() + 1);

  cout << "After erase index 1: ";
  for (int x : v)
  {
    cout << x << " "; //{10, 30, 40, 50}
  }
  cout << endl;
  // Remove a range: first two elements
  v.erase(v.begin(), v.begin() + 2);

  cout << "After erase range [0,2): ";
  for (int x : v)
  {
    cout << x << " "; //{40, 50}
  }

  cout << endl;
  return 0;
}
