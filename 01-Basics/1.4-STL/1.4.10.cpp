/*
 * ============================================
 * COPYING A VECTOR
 * ============================================
 *
 * How to copy a vector?
 * - Use the copy constructor or assignment operator.
 * - The copy is deep for elements (each element is copied).
 *
 * Basic Example:
 *   vector<int> a = {10, 20, 30};
 *   vector<int> b = a;          // copy constructor
 *   vector<int> c; c = a;       // assignment
 */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> a = {10, 20, 30, 40};

  // Copy using copy constructor
  vector<int> b = a;

  cout << "Copied vector: ";
  for (int x : b)
  {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}
