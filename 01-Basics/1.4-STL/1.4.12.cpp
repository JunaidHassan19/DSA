/*
 * ============================================
 * LIST IN STL (std::list)
 * ============================================
 *
 * What is a list?
 * - list is a doubly linked list.
 * - It allows fast insertion/deletion anywhere (O(1) with iterator).
 * - It does not support random access by index.
 * - Defined in <list>.
 *
 * Common Functions (similar to vector):
 * - size(), empty(), clear(), push_back(), push_front(), pop_back(), pop_front(),
 *   insert(), erase(), swap(), begin(), end(), rbegin(), rend()
 *
 * Basic Example:
 *   list<int> l;
 *   l.push_back(10);
 *   l.push_front(5);
 *   for (int x : l) cout << x << " ";
 */

#include <iostream>
#include <list>
using namespace std;

int main()
{
  list<int> l; // Create an empty list of integers

  // Add elements at front and back
  l.push_back(10); // l = {10}
  l.push_back(20); // l = {10, 20}
  l.push_front(5); // l = {5, 10, 20}

  cout << "List elements: ";
  for (int x : l)
  {
    cout << x << " "; //{5, 10, 20}
  }
  cout << endl;

  return 0;
}
