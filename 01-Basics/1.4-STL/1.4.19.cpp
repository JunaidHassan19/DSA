/*
 * ============================================
 * UNORDERED SET IN STL (std::unordered_set)
 * ============================================
 *
 * What is an unordered_set?
 * - Stores unique elements in no particular order (hash table).
 * - Average O(1) for insert, erase, find (worst-case O(n)).
 * - Defined in <unordered_set>.
 *
 * Basic Example:
 *   unordered_set<int> us;
 *   us.insert(10);
 *   us.insert(5);
 *   cout << us.count(10); // prints 1
 */

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
  unordered_set<int> us; // Create an empty unordered set of integers

  // Insert elements (duplicates ignored)
  us.insert(10); // {10}
  us.insert(5);  // {5,10}
  us.insert(20); // {5,10,20}
  us.insert(10); // duplicate

  cout << "Unordered set elements: ";
  for (int x : us)
  {
    cout << x << " "; // {in no particular order}{5,10,20}
  }

  cout << "\nFind 20: " << (us.find(20) != us.end() ? "Yes" : "No") << endl; // Yes
  cout << "Count of 10: " << us.count(10) << endl;                           // prints 1

  return 0;
}
