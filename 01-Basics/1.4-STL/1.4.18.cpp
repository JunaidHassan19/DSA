/*
 * ============================================
 * MULTISET IN STL (std::multiset)
 * ============================================
 *
 * What is a multiset?
 * - multiset stores elements in sorted order.
 * - It allows duplicate values (unlike set).
 * - Implemented as a balanced BST.
 * - Operations like insert, erase, find are O(log n).
 * - Defined in <set>.
 *
 * Time Complexity (multiset):
 * - insert():      O(log n)
 * - erase(key):    O(log n)
 * - find():        O(log n)
 * - count():       O(log n) + k (k = number of matches)
 * - lower_bound(): O(log n)
 * - upper_bound(): O(log n)
 *
 * Basic Example:
 *   multiset<int> ms;
 *   ms.insert(10);
 *   ms.insert(10);
 *   cout << ms.count(10); // prints 2
 */

#include <iostream>
#include <set>
using namespace std;

int main()
{
  multiset<int> ms; // Create an empty multiset of integers

  // Insert elements (duplicates allowed)
  ms.insert(10); // {10}
  ms.insert(5);  // {5,10}
  ms.insert(10); // {5,10,10}
  ms.insert(20); // {5,10,10,20}

  cout << "Multiset elements: ";
  for (int x : ms)
  {
    cout << x << " "; //{5,10,10,20}
  }

  cout << "\nCount of 10: " << ms.count(10) << endl; // prints 2

  return 0;
}
