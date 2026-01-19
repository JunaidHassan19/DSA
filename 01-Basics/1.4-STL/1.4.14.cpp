/*
 * ============================================
 * STACK IN STL (std::stack)
 * ============================================
 *
 * What is a stack?
 * - Stack is a LIFO (Last In, First Out) container adaptor.
 * - You can only access the top element.
 * - Common operations: push, pop, top, size, empty.
 * - Defined in <stack>.
 *
 * Basic Example:
 *   stack<int> s;
 *   s.push(10);
 *   s.push(20);
 *   cout << s.top(); // prints 20
 */

#include <iostream>
#include <stack>
using namespace std;

int main()
{
  stack<int> s; // Create an empty stack of integers

  // Push elements
  s.push(10); // s = {10}
  s.push(20); // s= {10, 20}
  s.push(30); // s= {10, 20, 30}

  cout << "Top element: " << s.top() << endl; // prints 30

  // Remove top element
  s.pop();                                       // s= {10, 20}
  cout << "After pop, top: " << s.top() << endl; // prints 20

  cout << "Size: " << s.size() << endl;                       // prints 2
  cout << "Is empty? " << (s.empty() ? "Yes" : "No") << endl; // prints No

  return 0;
}
