/*
 * ============================================
 * PRIORITY QUEUE IN STL (std::priority_queue)
 * ============================================
 *
 * What is a priority_queue?
 * - It is a max-heap by default (largest element on top).
 * - You can also make a min-heap using greater<>.
 * - Common operations: push, pop, top, size, empty.
 * - Defined in <queue>.
 *
 * Time Complexity:
 * - push(): O(log n)
 * - pop():  O(log n)
 * - top():  O(1)
 *
 * Basic Example:
 *   priority_queue<int> pq;
 *   pq.push(10);
 *   pq.push(30);
 *   cout << pq.top(); // prints 30
 */

#include <iostream>
#include <queue>
using namespace std;

int main()
{
  // Max-heap (default)
  priority_queue<int> pq; // Create a max-heap priority queue
  pq.push(10);            //{10}
  pq.push(30);            // {30,10}
  pq.push(20);            // {30,10,20}

  cout << "Max-heap top: " << pq.top() << endl;   // prints 30
  pq.pop();                                       // removes 30
  cout << "After pop, top: " << pq.top() << endl; // prints 20

  // Min-heap
  priority_queue<int, vector<int>, greater<int>> minpq; // Create a min-heap priority queue
  minpq.push(10);                                       //{10}
  minpq.push(30);                                       // {10,30}
  minpq.push(20);                                       // {10,20,30}

  cout << "Min-heap top: " << minpq.top() << endl; // prints 10

  return 0;
}
