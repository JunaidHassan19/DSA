/*
 * ============================================
 * UNORDERED MAP IN STL (std::unordered_map)
 * ============================================
 *
 * What is an unordered_map?
 * - Stores key-value pairs with no specific order (hash table).
 * - Keys are unique.
 * - Average O(1) for insert, find, erase (worst-case O(n)).
 * - Defined in <unordered_map>.
 *
 * Basic Example:
 *   unordered_map<string, int> um;
 *   um["apple"] = 2;
 *   cout << um["apple"]; // prints 2
 */

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
  unordered_map<string, int> um; // Create an empty unordered map from string to int

  // Insert key-value pairs
  um["apple"] = 2;  // {"apple":2}
  um["banana"] = 5; // {"apple":2, "banana":5}
  um["orange"] = 3; // {"apple":2, "banana":5, "orange":3}

  cout << "Unordered map elements:\n";
  for (auto &p : um)
  {
    cout << p.first << " -> " << p.second << endl; //{apple -> 2, banana -> 5, orange -> 3}
  }

  cout << "Find apple: " << (um.find("apple") != um.end() ? "Yes" : "No") << endl; // Yes

  return 0;
}
