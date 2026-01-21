/*
 * ============================================
 * MULTIMAP IN STL (std::multimap)
 * ============================================
 *
 * What is a multimap?
 * - Stores key-value pairs in sorted order by key.
 * - Duplicate keys are allowed.
 * - Implemented as a balanced BST.
 * - Operations like insert, find, erase are O(log n).
 * - Defined in <map>.
 *
 * Basic Example:
 *   multimap<string, int> mm;
 *   mm.insert({"apple", 1});
 *   mm.insert({"apple", 2});
 *   cout << mm.count("apple"); // prints 2
 */

#include <iostream>
#include <map>
using namespace std;

int main()
{
  multimap<string, int> mm; // Create an empty multimap from string to int

  // Insert key-value pairs (duplicate keys allowed)
  mm.insert({"apple", 1});  // {("apple",1)}
  mm.insert({"apple", 2});  // {("apple",1),("apple",2)}
  mm.insert({"banana", 5}); // {("apple",1),("apple",2),("banana",5)}

  cout << "Multimap elements (sorted by key):\n";
  for (auto &p : mm)
  {
    cout << p.first << " -> " << p.second << endl; // {apple -> 1, apple -> 2, banana -> 5}
  }

  cout << "Count of key 'apple': " << mm.count("apple") << endl; // prints 2

  return 0;
}
