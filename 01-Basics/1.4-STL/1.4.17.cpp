/*
 * ============================================
 * SET IN STL (std::set)
 * ============================================
 *
 * What is a set?
 * - set stores unique elements in sorted order.
 * - Implemented as a balanced BST (usually Red-Black Tree).
 * - Operations like insert, erase, find are O(log n).
 * - Defined in <set>.
 *
 * Time Complexity (set):
 * - find():        O(log n)
 * - erase(key):    O(log n)
 * - count():       O(log n)
 * - lower_bound(): O(log n)
 * - upper_bound(): O(log n)
 *
 * Basic Example:
 *   set<int> s;
 *   s.insert(10);
 *   s.insert(5);
 *   cout << *s.begin(); // prints 5
 */

#include <iostream>
#include <set>
using namespace std;

int main()
{
  set<int> s; // Create an empty set of integers

  // Insert elements (duplicates are ignored)
  s.insert(10); // {10}
  s.insert(5);  // {5,10}
  s.insert(20); // {5,10,20}
  s.insert(10); // duplicate, ignored {5,10,20}

  cout << "Set elements (sorted, unique): ";
  for (int x : s)
  {
    cout << x << " "; //{5,10,20}
  }

  // find(): returns iterator to element (or end if not found)
  cout << "\nFind 20: " << (s.find(20) != s.end() ? "Yes" : "No") << endl; // Yes

  // count(): returns 1 if exists, 0 otherwise (set has unique elements)
  cout << "Count 10: " << s.count(10) << endl; // 1

  // lower_bound(): first element >= key
  auto lb = s.lower_bound(9);
  if (lb != s.end())
    cout << "Lower bound of 9: " << *lb << endl; // 10

  // upper_bound(): first element > key
  auto ub = s.upper_bound(10);
  if (ub != s.end())
    cout << "Upper bound of 10: " << *ub << endl; // 20

  // erase(): remove a key (if present)
  s.erase(5); // remove 5
  cout << "After erase 5: ";
  for (int x : s)
    cout << x << " ";
  cout << endl;

  return 0;
}
