/*
 * ============================================
 * DEQUE IN STL (std::deque)
 * ============================================
 *
 * What is a deque?
 * - deque is a double-ended queue.
 * - It allows fast insertion/removal at both front and back.
 * - It supports random access by index.
 * - Defined in <deque>.
 *
 * Common Functions (same as vector):
 * - size(), empty(), clear(), push_back(), push_front(), pop_back(), pop_front(),
 *   insert(), erase(), swap(), begin(), end(), rbegin(), rend()
 *
 * Basic Example:
 *   deque<int> d;
 *   d.push_back(10);
 *   d.push_front(5);
 *   cout << d[0]; // prints 5
 */

#include <iostream>
#include <deque> // include deque header
using namespace std;

int main()
{
  deque<int> d; // Create an empty deque of integers

  // Add elements at back and front
  d.push_back(10); // d = {10}
  d.push_back(20); // d = {10, 20}
  d.push_front(5); // d = {5, 10, 20}

  cout << "Deque elements: ";
  for (int x : d)
  {
    cout << x << " "; //{5, 10, 20}
  }

  cout << "\nFirst element: " << d[0] << endl; // prints 5
  return 0;
}
