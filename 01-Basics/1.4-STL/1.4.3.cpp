/*
 * ============================================
 * ITERATORS IN STL (begin, end, rbegin, rend)
 * ============================================
 *
 * What is an Iterator?
 * - Iterator is like a pointer used to traverse containers.
 * - begin() points to the first element.
 * - end() points past the last element.
 * - rbegin() points to the last element (reverse start).
 * - rend() points before the first element (reverse end).
 *
 * Basic Example:
 *   vector<int> v = {10, 20, 30};
 *   for (auto it = v.begin(); it != v.end(); ++it) cout << *it;
 *   for (auto it = v.rbegin(); it != v.rend(); ++it) cout << *it;
 */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v = {10, 20, 30, 40}; // Initialize vector with elements

	// Forward traversal using begin() and end()
	cout << "Forward: ";
	for (auto it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << " "; // Output each element{10, 20, 30, 40}
	}

	// Reverse traversal using rbegin() and rend()
	cout << "\nReverse: ";
	for (auto it = v.rbegin(); it != v.rend(); ++it) // Reverse iterator{40, 30, 20, 10}
	{
		cout << *it << " "; // Output each element{40, 30, 20, 10}
	}

	cout << endl;

	vector<int>::iterator it = v.begin(); // Iterator to the first element
	it++;																	// Move to the next element
	cout << *it << endl;									// Output: 20
	return 0;
}
