/*
 * ============================================
 * SORT IN STL (std::sort)
 * ============================================
 *
 * What is sort?
 * - sort() arranges elements in ascending order by default.
 * - It works on random access iterators (vector, deque, array).
 * - Defined in <algorithm>.
 * - Time complexity: O(n log n).
 *
 * Basic Example:
 *   vector<int> v = {5, 2, 9, 1};
 *   sort(v.begin(), v.end());
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Self comparator: sort by absolute value, then by actual value
bool absCompare(int a, int b)
{
  if (abs(a) == abs(b))
    return a < b;
  return abs(a) < abs(b);
}

int main()
{
  vector<int> v = {5, 2, 9, 1, 3};

  // Sort in ascending order
  sort(v.begin(), v.end());

  cout << "Ascending: ";
  for (int x : v)
  {
    cout << x << " ";
  }
  cout << endl;

  // Sort in descending order
  vector<int> v2 = {5, 2, 9, 1, 3};
  sort(v2.begin(), v2.end(), greater<int>());

  cout << "Descending: ";
  for (int x : v2)
  {
    cout << x << " ";
  }
  cout << endl;

  // Sort only a subrange (half array)
  vector<int> v3 = {8, 6, 4, 2, 7, 5, 3, 1};
  sort(v3.begin(), v3.begin() + v3.size() / 2); // sort first half only

  cout << "Half sorted (first half): ";
  for (int x : v3)
  {
    cout << x << " ";
  }
  cout << endl;

  // Sort pairs by second value (custom comparator)
  vector<pair<int, int>> vp = {{1, 5}, {2, 1}, {3, 3}};
  sort(vp.begin(), vp.end(), [](const pair<int, int> &a, const pair<int, int> &b)
       { return a.second < b.second; });

  cout << "Pairs sorted by second: ";
  for (auto &p : vp)
  {
    cout << "(" << p.first << "," << p.second << ") ";
  }
  cout << endl;

  // Sort using a self comparator function
  vector<int> v4 = {-5, 2, -1, 4, -3};
  sort(v4.begin(), v4.end(), absCompare);

  cout << "Self comparator (abs then value): ";
  for (int x : v4)
  {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}
