/*
 * ============================================
 * FOR-EACH LOOP (RANGE-BASED FOR) IN C++
 * ============================================
 *
 * What is a for-each loop?
 * - It is a simple way to loop through all elements of a container.
 * - It works with arrays, vectors, and other STL containers.
 * - Syntax: for (type element : container) { ... }
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
	vector<int> v = {10, 20, 30, 40};

	cout << "Vector elements: ";
	for (int x : v)
	{
		cout << x << " ";
	}
	cout << endl;

	return 0;
}
