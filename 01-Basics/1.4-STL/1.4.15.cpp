/*
 * ============================================
 * QUEUE IN STL (std::queue)
 * ============================================
 *
 * What is a queue?
 * - Queue is a FIFO (First In, First Out) container adaptor.
 * - You can only access the front and back elements.
 * - Common operations: push, pop, front, back, size, empty.
 * - Defined in <queue>.
 *
 * Basic Example:
 *   queue<int> q;
 *   q.push(10);
 *   q.push(20);
 *   cout << q.front(); // prints 10
 */

#include <iostream>
#include <queue>
using namespace std;

int main()
{
  queue<int> q;

  // Push elements
  q.push(10); // q = {10}
  q.push(20); // q = {10, 20}
  q.push(30); // q = {10, 20, 30}

  cout << "Front: " << q.front() << endl; // prints 10
  cout << "Back: " << q.back() << endl;   // prints 30

  // Remove front element
  q.pop();                                           // q = {20, 30}
  cout << "After pop, front: " << q.front() << endl; // prints 20

  cout << "Size: " << q.size() << endl;                       // prints 2
  cout << "Is empty? " << (q.empty() ? "Yes" : "No") << endl; // prints No

  return 0;
}
