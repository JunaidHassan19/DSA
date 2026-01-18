/*
 * ============================================
 * VECTOR IN STL (Standard Template Library)
 * ============================================
 *
 * What is a Vector?
 * - A vector is a DYNAMIC ARRAY that can grow or shrink in size
 * - It is defined in the <vector> header
 * - Syntax: vector<datatype> variableName;
 *
 * Key Properties:
 * - Dynamic size (unlike arrays, size can change at runtime)
 * - Contiguous memory allocation (elements stored next to each other)
 * - Random access in O(1) time using index
 * - Insertion/Deletion at end: O(1) amortized
 * - Insertion/Deletion at middle: O(n)
 *
 * Common Use Cases:
 * - When you don't know the size of array beforehand
 * - When you need to frequently add/remove elements
 * - Replacement for dynamic arrays (no need for malloc/new)
 */

#include <iostream>
#include <vector>
#include <algorithm> // For sort, reverse, etc.
// #include<bits/stdc++.h>
using namespace std;

// ============================================
// BASIC VECTOR EXAMPLES
// ============================================
void explainVector()
{
  cout << "=== BASIC VECTOR EXAMPLES ===" << endl;

  // -----------------------------------------
  // Creating an empty vector
  // -----------------------------------------
  vector<int> v;
  // v is empty, size = 0

  // -----------------------------------------
  // push_back(): Add element at the end
  // -----------------------------------------
  // Creates a copy of the element and adds it
  v.push_back(1);
  cout << "After push_back(1): ";
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
  // Output: 1

  // -----------------------------------------
  // emplace_back(): Add element at the end (MORE EFFICIENT)
  // -----------------------------------------
  // Constructs the element in-place (no copy)
  // Preferred over push_back for complex objects
  v.emplace_back(2);
  cout << "After emplace_back(2): ";
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
  // Output: 1 2
}

// ============================================
// DIFFERENT WAYS TO CREATE VECTORS
// ============================================
void waysToCreateVector()
{
  cout << "\n=== WAYS TO CREATE VECTORS ===" << endl;

  // Method 1: Empty vector
  vector<int> v1;
  cout << "Empty vector size: " << v1.size() << endl;
  // Output: 0

  // Method 2: Vector with initial size (all elements = 0)
  vector<int> v2(5); // Creates {0, 0, 0, 0, 0}
  cout << "v2 (size 5, default 0): ";
  for (int x : v2)
    cout << x << " ";
  cout << endl;

  // Method 3: Vector with size and initial value
  vector<int> v3(5, 100); // Creates {100, 100, 100, 100, 100}
  cout << "v3 (size 5, value 100): ";
  for (int x : v3)
    cout << x << " ";
  cout << endl;

  // Method 4: Initialize with values (initializer list)
  vector<int> v4 = {10, 20, 30, 40, 50};
  cout << "v4 (initializer list): ";
  for (int x : v4)
    cout << x << " ";
  cout << endl;

  // Method 5: Copy from another vector
  vector<int> v5(v4); // Copy of v4
  cout << "v5 (copy of v4): ";
  for (int x : v5)
    cout << x << " ";
  cout << endl;

  // Method 6: Copy a range from another vector
  vector<int> v6(v4.begin(), v4.begin() + 3); // First 3 elements
  cout << "v6 (first 3 of v4): ";
  for (int x : v6)
    cout << x << " ";
  cout << endl;

  // Method 7: 2D Vector (Vector of Vectors)
  vector<vector<int>> v7(3, vector<int>(4, 0)); // 3 rows, 4 cols, all 0
  cout << "v7 (3x4 2D vector): " << v7.size() << " rows, " << v7[0].size() << " cols" << endl;
}

// ============================================
// VECTOR CAPACITY FUNCTIONS
// ============================================
void vectorCapacity()
{
  cout << "\n=== VECTOR CAPACITY FUNCTIONS ===" << endl;

  vector<int> v = {1, 2, 3, 4, 5};

  // -----------------------------------------
  // size(): Returns number of elements
  // -----------------------------------------
  cout << "Size: " << v.size() << endl; // Output: 5

  // -----------------------------------------
  // capacity(): Returns allocated storage capacity
  // -----------------------------------------
  // Capacity >= Size (vector pre-allocates extra space)
  cout << "Capacity: " << v.capacity() << endl;

  // -----------------------------------------
  // max_size(): Maximum possible size
  // -----------------------------------------
  cout << "Max Size: " << v.max_size() << endl;

  // -----------------------------------------
  // empty(): Check if vector is empty
  // -----------------------------------------
  cout << "Is empty? " << (v.empty() ? "Yes" : "No") << endl; // Output: No

  // -----------------------------------------
  // resize(): Change the size
  // -----------------------------------------
  v.resize(8); // New elements initialized to 0
  cout << "After resize(8): ";
  for (int x : v)
    cout << x << " ";
  cout << endl;
  // Output: 1 2 3 4 5 0 0 0

  v.resize(3); // Shrink - removes elements from end
  cout << "After resize(3): ";
  for (int x : v)
    cout << x << " ";
  cout << endl;
  // Output: 1 2 3

  // -----------------------------------------
  // reserve(): Pre-allocate memory
  // -----------------------------------------
  // Useful when you know approximate size to avoid reallocations
  v.reserve(100);
  cout << "After reserve(100), capacity: " << v.capacity() << endl;

  // -----------------------------------------
  // shrink_to_fit(): Reduce capacity to match size
  // -----------------------------------------
  v.shrink_to_fit();
  cout << "After shrink_to_fit(), capacity: " << v.capacity() << endl;
}

// ============================================
// ACCESSING ELEMENTS
// ============================================
void accessingElements()
{
  cout << "\n=== ACCESSING ELEMENTS ===" << endl;

  vector<int> v = {10, 20, 30, 40, 50};

  // -----------------------------------------
  // Using [] operator (No bounds checking)
  // -----------------------------------------
  cout << "v[0] = " << v[0] << endl; // Output: 10
  cout << "v[2] = " << v[2] << endl; // Output: 30

  // -----------------------------------------
  // Using at() (With bounds checking - safer)
  // -----------------------------------------
  cout << "v.at(1) = " << v.at(1) << endl; // Output: 20
  // v.at(10) would throw out_of_range exception

  // -----------------------------------------
  // front(): First element
  // -----------------------------------------
  cout << "Front: " << v.front() << endl; // Output: 10

  // -----------------------------------------
  // back(): Last element
  // -----------------------------------------
  cout << "Back: " << v.back() << endl; // Output: 50

  // -----------------------------------------
  // data(): Pointer to underlying array
  // -----------------------------------------
  int *ptr = v.data();
  cout << "Using data(): " << *ptr << ", " << *(ptr + 1) << endl; // Output: 10, 20
}

// ============================================
// MODIFYING VECTORS
// ============================================
void modifyingVectors()
{
  cout << "\n=== MODIFYING VECTORS ===" << endl;

  vector<int> v = {1, 2, 3, 4, 5};

  // -----------------------------------------
  // push_back(): Add at end
  // -----------------------------------------
  v.push_back(6);
  cout << "After push_back(6): ";
  for (int x : v)
    cout << x << " ";
  cout << endl;
  // Output: 1 2 3 4 5 6

  // -----------------------------------------
  // pop_back(): Remove last element
  // -----------------------------------------
  v.pop_back();
  cout << "After pop_back(): ";
  for (int x : v)
    cout << x << " ";
  cout << endl;
  // Output: 1 2 3 4 5

  // -----------------------------------------
  // insert(): Insert at specific position
  // -----------------------------------------
  // insert(position, value)
  v.insert(v.begin() + 2, 100); // Insert 100 at index 2
  cout << "After insert at index 2: ";
  for (int x : v)
    cout << x << " ";
  cout << endl;
  // Output: 1 2 100 3 4 5

  // Insert multiple copies
  v.insert(v.begin(), 3, 0); // Insert three 0s at beginning
  cout << "After insert 3 zeros at start: ";
  for (int x : v)
    cout << x << " ";
  cout << endl;
  // Output: 0 0 0 1 2 100 3 4 5

  // -----------------------------------------
  // erase(): Remove element(s)
  // -----------------------------------------
  v.erase(v.begin()); // Remove first element
  cout << "After erase first: ";
  for (int x : v)
    cout << x << " ";
  cout << endl;
  // Output: 0 0 1 2 100 3 4 5

  v.erase(v.begin() + 1, v.begin() + 3); // Remove range [1, 3)
  cout << "After erase range [1,3): ";
  for (int x : v)
    cout << x << " ";
  cout << endl;
  // Output: 0 2 100 3 4 5

  // -----------------------------------------
  // clear(): Remove all elements
  // -----------------------------------------
  v.clear();
  cout << "After clear(), size: " << v.size() << endl;
  // Output: 0

  // -----------------------------------------
  // assign(): Replace all elements
  // -----------------------------------------
  v.assign(5, 10); // 5 elements, each with value 10
  cout << "After assign(5, 10): ";
  for (int x : v)
    cout << x << " ";
  cout << endl;
  // Output: 10 10 10 10 10

  // -----------------------------------------
  // swap(): Swap contents with another vector
  // -----------------------------------------
  vector<int> v2 = {99, 98, 97};
  swap(v, v2);
  cout << "After swap, v: ";
  for (int x : v)
    cout << x << " ";
  cout << endl;
  // Output: 99 98 97
}

// ============================================
// ITERATORS
// ============================================
void vectorIterators()
{
  cout << "\n=== VECTOR ITERATORS ===" << endl;

  vector<int> v = {10, 20, 30, 40, 50};

  // -----------------------------------------
  // begin() and end(): Forward iteration
  // -----------------------------------------
  cout << "Forward iteration: ";
  for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
  {
    cout << *it << " "; // Dereference iterator to get value
  }
  cout << endl;
  // Output: 10 20 30 40 50

  // Using auto (cleaner)
  cout << "Using auto: ";
  for (auto it = v.begin(); it != v.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;

  // -----------------------------------------
  // rbegin() and rend(): Reverse iteration
  // -----------------------------------------
  cout << "Reverse iteration: ";
  for (auto it = v.rbegin(); it != v.rend(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
  // Output: 50 40 30 20 10

  // -----------------------------------------
  // Range-based for loop (Modern C++)
  // -----------------------------------------
  cout << "Range-based loop: ";
  for (int x : v)
  {
    cout << x << " ";
  }
  cout << endl;

  // With reference (to modify elements)
  for (int &x : v)
  {
    x *= 2; // Double each element
  }
  cout << "After doubling: ";
  for (int x : v)
    cout << x << " ";
  cout << endl;
  // Output: 20 40 60 80 100
}

// ============================================
// VECTOR ALGORITHMS
// ============================================
void vectorAlgorithms()
{
  cout << "\n=== VECTOR ALGORITHMS ===" << endl;

  vector<int> v = {5, 2, 8, 1, 9, 3, 7, 4, 6};

  // -----------------------------------------
  // sort(): Sort in ascending order
  // -----------------------------------------
  sort(v.begin(), v.end());
  cout << "After sort (ascending): ";
  for (int x : v)
    cout << x << " ";
  cout << endl;
  // Output: 1 2 3 4 5 6 7 8 9

  // Sort in descending order
  sort(v.begin(), v.end(), greater<int>());
  cout << "After sort (descending): ";
  for (int x : v)
    cout << x << " ";
  cout << endl;
  // Output: 9 8 7 6 5 4 3 2 1

  // -----------------------------------------
  // reverse(): Reverse the vector
  // -----------------------------------------
  reverse(v.begin(), v.end());
  cout << "After reverse: ";
  for (int x : v)
    cout << x << " ";
  cout << endl;
  // Output: 1 2 3 4 5 6 7 8 9

  // -----------------------------------------
  // find(): Find an element
  // -----------------------------------------
  auto it = find(v.begin(), v.end(), 5);
  if (it != v.end())
  {
    cout << "Found 5 at index: " << (it - v.begin()) << endl;
  }
  // Output: Found 5 at index: 4

  // -----------------------------------------
  // count(): Count occurrences
  // -----------------------------------------
  v.push_back(5);
  v.push_back(5);
  cout << "Count of 5: " << count(v.begin(), v.end(), 5) << endl;
  // Output: 3

  // -----------------------------------------
  // max_element() and min_element()
  // -----------------------------------------
  cout << "Max element: " << *max_element(v.begin(), v.end()) << endl;
  cout << "Min element: " << *min_element(v.begin(), v.end()) << endl;

  // -----------------------------------------
  // accumulate(): Sum of elements (include <numeric>)
  // -----------------------------------------
  // int sum = accumulate(v.begin(), v.end(), 0);
  // cout << "Sum: " << sum << endl;

  // -----------------------------------------
  // unique(): Remove consecutive duplicates
  // -----------------------------------------
  v = {1, 1, 2, 2, 2, 3, 3, 4};
  auto last = unique(v.begin(), v.end());
  v.erase(last, v.end()); // Actually remove the duplicates
  cout << "After unique: ";
  for (int x : v)
    cout << x << " ";
  cout << endl;
  // Output: 1 2 3 4
}

// ============================================
// 2D VECTORS (MATRIX)
// ============================================
void vector2D()
{
  cout << "\n=== 2D VECTORS (MATRIX) ===" << endl;

  // -----------------------------------------
  // Creating 2D vector
  // -----------------------------------------
  int rows = 3, cols = 4;
  vector<vector<int>> matrix(rows, vector<int>(cols, 0));

  // Fill with values
  int val = 1;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      matrix[i][j] = val++;
    }
  }

  // Print matrix
  cout << "3x4 Matrix:" << endl;
  for (int i = 0; i < matrix.size(); i++)
  {
    for (int j = 0; j < matrix[i].size(); j++)
    {
      cout << matrix[i][j] << "\t";
    }
    cout << endl;
  }
  // Output:
  // 1  2  3  4
  // 5  6  7  8
  // 9  10 11 12

  // -----------------------------------------
  // Jagged array (different row sizes)
  // -----------------------------------------
  vector<vector<int>> jagged;
  jagged.push_back({1, 2});
  jagged.push_back({3, 4, 5});
  jagged.push_back({6});

  cout << "Jagged array:" << endl;
  for (auto &row : jagged)
  {
    for (int x : row)
      cout << x << " ";
    cout << endl;
  }
}

// ============================================
// PRACTICAL EXAMPLE: DYNAMIC INPUT
// ============================================
void practicalExample()
{
  cout << "\n=== PRACTICAL EXAMPLE ===" << endl;

  // Simulating dynamic input
  vector<int> scores;
  int testScores[] = {85, 92, 78, 95, 88, 76, 90}; // Simulated input
  int n = 7;

  cout << "Adding scores dynamically:" << endl;
  for (int i = 0; i < n; i++)
  {
    scores.push_back(testScores[i]);
    cout << "Added " << testScores[i] << ", size now: " << scores.size() << endl;
  }

  // Calculate average
  int sum = 0;
  for (int score : scores)
  {
    sum += score;
  }
  double average = (double)sum / scores.size();
  cout << "Average score: " << average << endl;

  // Find highest and lowest
  sort(scores.begin(), scores.end());
  cout << "Lowest: " << scores.front() << ", Highest: " << scores.back() << endl;
}

// ============================================
// MAIN FUNCTION
// ============================================
int main()
{
  explainVector();      // Basic vector operations
  waysToCreateVector(); // Different ways to create vectors
  vectorCapacity();     // Size, capacity, resize, reserve
  accessingElements();  // [], at(), front(), back()
  modifyingVectors();   // push, pop, insert, erase, clear
  vectorIterators();    // Iterators and loops
  vectorAlgorithms();   // sort, reverse, find, count
  vector2D();           // 2D vectors (matrix)
  practicalExample();   // Real-world usage

  return 0;
}

/*
 * ============================================
 * SUMMARY - VECTOR IN STL
 * ============================================
 *
 * 1. Declaration:
 *    - vector<type> v;           // Empty
 *    - vector<type> v(n);        // Size n, default values
 *    - vector<type> v(n, val);   // Size n, all = val
 *    - vector<type> v = {1,2,3}; // Initializer list
 *
 * 2. Common Functions:
 *    | Function      | Description                    | Time     |
 *    |---------------|--------------------------------|----------|
 *    | push_back()   | Add at end                     | O(1)*    |
 *    | pop_back()    | Remove from end                | O(1)     |
 *    | size()        | Number of elements             | O(1)     |
 *    | empty()       | Check if empty                 | O(1)     |
 *    | front()       | First element                  | O(1)     |
 *    | back()        | Last element                   | O(1)     |
 *    | at(i) / [i]   | Access element at index        | O(1)     |
 *    | insert()      | Insert at position             | O(n)     |
 *    | erase()       | Remove at position             | O(n)     |
 *    | clear()       | Remove all elements            | O(n)     |
 *    | begin()       | Iterator to first              | O(1)     |
 *    | end()         | Iterator past last             | O(1)     |
 *
 *    * Amortized O(1), occasionally O(n) when resizing
 *
 * 3. push_back() vs emplace_back():
 *    - push_back: Creates copy, then adds
 *    - emplace_back: Constructs in-place (faster for objects)
 *
 * 4. Vector vs Array:
 *    - Vector: Dynamic size, more features, slightly slower
 *    - Array: Fixed size, faster, less memory overhead
 *
 * 5. Memory:
 *    - Contiguous allocation (cache-friendly)
 *    - Capacity doubles when full (amortized O(1) insert)
 *    - Use reserve() if you know approximate size
 *
 * ============================================
 */