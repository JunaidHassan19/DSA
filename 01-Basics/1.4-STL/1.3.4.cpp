/*
 * ============================================
 * PRINTING A VECTOR
 * ============================================
 *
 * A vector is a dynamic array. To print all elements,
 * you can use a range-based for loop.
 *
 * Basic Example:
 *   vector<int> v = {10, 20, 30};
 *   for (int x : v) cout << x << " ";
 */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	// Initialize vector with elements
	vector<int> v = {10, 20, 30, 40};

	cout << "Vector elements: ";
	for (int x : v)
	{
		cout << x << " ";
	}
	cout << endl;

	return 0;
}
