/*
 * ============================================
 * VECTOR IN STL (Standard Template Library)
 * ============================================
 *
 * What is a Vector?
 * - A vector is a dynamic array that can grow or shrink in size.
 * - It is defined in the <vector> header.
 * - Elements are stored in contiguous memory.
 * - You can access elements by index in O(1) time.
 *
 * Basic Example:
 *   vector<int> v;
 *   v.push_back(10);   // v = {10}
 *   v.push_back(20);   // v = {10, 20}
 *   cout << v[0];      // prints 10
 */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  // Create an empty vector of integers
  vector<int> v;

  // Add elements to the end of the vector
  v.push_back(10); // v = {10}
  v.push_back(20); // v = {10, 20}

  // Print all elements using a range-based loop
  cout << "Vector elements: ";
  for (int x : v) // Range-based for loop
  {
    cout << x << " "; // Output each element
  }
  cout << endl;
  // Access by index (O(1))
  cout << "First element: " << v[0] << endl; // prints 10

  return 0;
}