/*
 * ============================================
 * DELETE IN C++ (FREE DYNAMIC MEMORY)
 * ============================================
 *
 * What does delete do?
 * - delete frees memory allocated with new.
 * - delete[] frees memory allocated with new[].
 * - Always match new with delete, and new[] with delete[].
 *
 * Basic Example:
 *   int* p = new int(10);
 *   delete p;
 *
 *   int* arr = new int[3]{1,2,3};
 *   delete[] arr;
 */

#include <iostream>
using namespace std;

int main()
{
  // Single integer allocation
  int *p = new int(10);
  cout << "Value: " << *p << endl;
  delete p; // free single object

  // Array allocation
  int *arr = new int[3]{1, 2, 3};
  cout << "Array: ";
  for (int i = 0; i < 3; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  delete[] arr; // free array

  return 0;
}
