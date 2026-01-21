/*
 * ============================================
 * MAP IN STL (std::map)
 * ============================================
 *
 * What is a map?
 * - Stores key-value pairs in sorted order by key.
 * - Keys are unique.
 * - Implemented as a balanced BST (Red-Black Tree).
 * - Operations like insert, find, erase are O(log n).
 * - Defined in <map>.
 *
 * Basic Example:
 *   map<string, int> mp;
 *   mp["apple"] = 2;
 *   cout << mp["apple"]; // prints 2
 */

#include <iostream>
#include <map>
using namespace std;

int main()
{
  map<string, int> mp; // Create an empty map from string to int

  // Insert key-value pairs
  mp["apple"] = 2;  // {"apple":2}
  mp["banana"] = 5; // {"apple":2, "banana":5}
  mp["orange"] = 3; // {"apple":2, "banana":5, "orange":3}

  cout << "Map elements (sorted by key):\n";
  for (auto &p : mp)
  {
    cout << p.first << " -> " << p.second << endl; // {apple -> 2, banana -> 5, orange -> 3}
  }

  // Find a key
  cout << "Find apple: " << (mp.find("apple") != mp.end() ? "Yes" : "No") << endl; // Yes

  return 0;
}
