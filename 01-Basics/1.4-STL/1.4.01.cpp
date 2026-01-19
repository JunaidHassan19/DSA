/*
 * ============================================
 * PAIR IN STL (Standard Template Library)
 * ============================================
 *
 * What is a Pair?
 * - A pair is a container that holds TWO values (can be of different types)
 * - It is defined in the <utility> header
 * - Syntax: pair<datatype1, datatype2> variableName;
 *
 * Key Properties:
 * - .first  -> Access the first element
 * - .second -> Access the second element
 * - Pairs can be nested (pair inside a pair)
 * - Pairs can be stored in arrays
 *
 * Common Use Cases:
 * - Storing coordinates (x, y)
 * - Storing key-value relationships
 * - Returning two values from a function
 * - Used extensively in maps and other STL containers
 */

#include <iostream>
#include <utility> // Required header for pair (also included in <bits/stdc++.h>)
#include <vector>
#include <algorithm>
using namespace std;

// ============================================
// BASIC PAIR EXAMPLES
// ============================================
void explainPair()
{
  cout << "=== BASIC PAIR EXAMPLES ===" << endl;

  // -----------------------------------------
  // Example 1: Simple pair of two integers
  // -----------------------------------------
  pair<int, int> p = {2, 5};
  // p.first = 2, p.second = 5

  cout << "Pair p: " << p.first << " " << p.second << endl;
  // Output: 2 5

  // -----------------------------------------
  // Example 2: Pair with different data types (int and string)
  // -----------------------------------------
  pair<int, string> p1 = {9, "Junni"};
  // p1.first = 9 (int), p1.second = "Junni" (string)

  cout << "Pair p1: " << p1.first << " " << p1.second << endl;
  // Output: 9 Junni

  // -----------------------------------------
  // Example 3: Nested Pair (Pair inside a Pair)
  // -----------------------------------------
  // This is useful when you need to store 3 values together
  pair<int, pair<int, int>> p2 = {3, {5, 9}};
  // p2.first = 3
  // p2.second = {5, 9} (another pair)
  // p2.second.first = 5
  // p2.second.second = 9

  cout << "Nested Pair p2: " << p2.first << " " << p2.second.first << " " << p2.second.second << endl;
  // Output: 3 5 9

  // -----------------------------------------
  // Example 4: Array of Pairs
  // -----------------------------------------
  // Useful for storing multiple pairs together (like coordinates)
  pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}};
  // arr[0] = {1, 2}
  // arr[1] = {2, 3}
  // arr[2] = {3, 4}

  cout << "Array of pairs: " << arr[1].second << " " << arr[2].first << endl;
  // arr[1].second = 3, arr[2].first = 3
  // Output: 3 3
}

// ============================================
// DIFFERENT WAYS TO CREATE PAIRS
// ============================================
void waysToCreatePair()
{
  cout << "\n=== WAYS TO CREATE PAIRS ===" << endl;

  // Method 1: Direct initialization with braces
  pair<int, int> p1 = {10, 20};
  cout << "Method 1 (braces): " << p1.first << ", " << p1.second << endl;

  // Method 2: Using make_pair() function
  // make_pair automatically deduces the types
  pair<int, int> p2 = make_pair(30, 40);
  cout << "Method 2 (make_pair): " << p2.first << ", " << p2.second << endl;

  // Method 3: Constructor initialization
  pair<int, int> p3(50, 60);
  cout << "Method 3 (constructor): " << p3.first << ", " << p3.second << endl;

  // Method 4: Declare first, assign later
  pair<int, int> p4;
  p4.first = 70;
  p4.second = 80;
  cout << "Method 4 (assign later): " << p4.first << ", " << p4.second << endl;

  // Method 5: Copy from another pair
  pair<int, int> p5 = p1;
  cout << "Method 5 (copy): " << p5.first << ", " << p5.second << endl;
}

// ============================================
// PAIR OPERATIONS
// ============================================
void pairOperations()
{
  cout << "\n=== PAIR OPERATIONS ===" << endl;

  // -----------------------------------------
  // Comparison Operations
  // -----------------------------------------
  // Pairs can be compared using ==, !=, <, >, <=, >=
  // Comparison is done lexicographically:
  // - First compares .first elements
  // - If equal, then compares .second elements

  pair<int, int> a = {1, 5};
  pair<int, int> b = {1, 3};
  pair<int, int> c = {2, 1};

  cout << "a = {1, 5}, b = {1, 3}, c = {2, 1}" << endl;

  // Equality check
  if (a == b)
    cout << "a equals b" << endl;
  else
    cout << "a does NOT equal b" << endl;
  // Output: a does NOT equal b

  // Less than comparison
  // First compares first elements: 1 == 1
  // Then compares second elements: 5 > 3
  // So a > b
  if (a < b)
    cout << "a < b" << endl;
  else
    cout << "a >= b" << endl;
  // Output: a >= b

  // c > a because c.first (2) > a.first (1)
  if (c > a)
    cout << "c > a" << endl;
  // Output: c > a

  // -----------------------------------------
  // Swap Operation
  // -----------------------------------------
  pair<int, int> x = {100, 200};
  pair<int, int> y = {300, 400};

  cout << "\nBefore swap: x = {" << x.first << ", " << x.second << "}, y = {" << y.first << ", " << y.second << "}" << endl;

  swap(x, y); // Swaps the contents of x and y

  cout << "After swap:  x = {" << x.first << ", " << x.second << "}, y = {" << y.first << ", " << y.second << "}" << endl;
  // Output: After swap: x = {300, 400}, y = {100, 200}
}

// ============================================
// PAIR WITH VECTORS
// ============================================
void pairWithVectors()
{
  cout << "\n=== PAIR WITH VECTORS ===" << endl;

  // Vector of pairs - Very commonly used!
  vector<pair<int, int>> coordinates;

  // Adding pairs to vector
  coordinates.push_back({1, 2});
  coordinates.push_back(make_pair(3, 4));
  coordinates.push_back({5, 6});
  coordinates.emplace_back(7, 8); // More efficient way

  // Accessing elements
  cout << "Coordinates:" << endl;
  for (int i = 0; i < coordinates.size(); i++)
  {
    cout << "Point " << i << ": (" << coordinates[i].first << ", " << coordinates[i].second << ")" << endl;
  }

  // Using range-based for loop
  cout << "\nUsing range-based loop:" << endl;
  for (auto &coord : coordinates)
  {
    cout << "(" << coord.first << ", " << coord.second << ") ";
  }
  cout << endl;

  // Using structured bindings (C++17)
  // for (auto& [x, y] : coordinates) {
  //     cout << "(" << x << ", " << y << ") ";
  // }
}

// ============================================
// SORTING PAIRS
// ============================================
void sortingPairs()
{
  cout << "\n=== SORTING PAIRS ===" << endl;

  vector<pair<int, int>> v = {{3, 5}, {1, 8}, {2, 6}, {1, 2}};

  cout << "Before sorting: ";
  for (auto &p : v)
    cout << "{" << p.first << "," << p.second << "} ";
  cout << endl;

  // Default sort: sorts by first element, then by second if first is equal
  sort(v.begin(), v.end());

  cout << "After default sort: ";
  for (auto &p : v)
    cout << "{" << p.first << "," << p.second << "} ";
  cout << endl;
  // Output: {1,2} {1,8} {2,6} {3,5}

  // Custom sort: Sort by second element
  sort(v.begin(), v.end(), [](pair<int, int> &a, pair<int, int> &b)
       { return a.second < b.second; });

  cout << "Sort by second element: ";
  for (auto &p : v)
    cout << "{" << p.first << "," << p.second << "} ";
  cout << endl;
  // Output: {1,2} {3,5} {2,6} {1,8}

  // Sort in descending order by first element
  sort(v.begin(), v.end(), greater<pair<int, int>>());

  cout << "Descending by first: ";
  for (auto &p : v)
    cout << "{" << p.first << "," << p.second << "} ";
  cout << endl;
}

// ============================================
// PRACTICAL EXAMPLE: STUDENT MARKS
// ============================================
void practicalExample()
{
  cout << "\n=== PRACTICAL EXAMPLE: STUDENT MARKS ===" << endl;

  // Storing student roll number and marks
  vector<pair<int, int>> students = {
      {101, 85}, // Roll: 101, Marks: 85
      {102, 92}, // Roll: 102, Marks: 92
      {103, 78}, // Roll: 103, Marks: 78
      {104, 95}, // Roll: 104, Marks: 95
      {105, 88}  // Roll: 105, Marks: 88
  };

  // Sort by marks (second element) in descending order
  sort(students.begin(), students.end(), [](auto &a, auto &b)
       { return a.second > b.second; });

  cout << "Rank | Roll No | Marks" << endl;
  cout << "------------------------" << endl;
  int rank = 1;
  for (auto &student : students)
  {
    cout << "  " << rank++ << "  |   " << student.first << "   |  " << student.second << endl;
  }
}

// ============================================
// RETURNING PAIR FROM FUNCTION
// ============================================
pair<int, int> findMinMax(int arr[], int n)
{
  // Returns both minimum and maximum in a single pair
  int minVal = arr[0], maxVal = arr[0];
  for (int i = 1; i < n; i++)
  {
    if (arr[i] < minVal)
      minVal = arr[i];
    if (arr[i] > maxVal)
      maxVal = arr[i];
  }
  return {minVal, maxVal}; // Return as pair
}

void returnPairExample()
{
  cout << "\n=== RETURNING PAIR FROM FUNCTION ===" << endl;

  int arr[] = {5, 2, 9, 1, 7, 3};
  int n = sizeof(arr) / sizeof(arr[0]);

  // Receive both values at once
  pair<int, int> result = findMinMax(arr, n);

  cout << "Array: {5, 2, 9, 1, 7, 3}" << endl;
  cout << "Minimum: " << result.first << endl;
  cout << "Maximum: " << result.second << endl;
}

// ============================================
// TIE FUNCTION - UNPACKING PAIRS
// ============================================
void tieExample()
{
  cout << "\n=== TIE FUNCTION ===" << endl;

  pair<int, string> person = {25, "Alice"};

  // Using tie() to unpack pair into separate variables
  int age;
  string name;
  tie(age, name) = person;

  cout << "Name: " << name << ", Age: " << age << endl;
  // Output: Name: Alice, Age: 25

  // Using 'ignore' to skip unwanted values
  int onlyAge;
  tie(onlyAge, ignore) = person;
  cout << "Only Age: " << onlyAge << endl;
}

// ============================================
// MAIN FUNCTION
// ============================================
int main()
{
  explainPair();       // Basic pair examples
  waysToCreatePair();  // Different ways to create pairs
  pairOperations();    // Comparison and swap operations
  pairWithVectors();   // Using pairs with vectors
  sortingPairs();      // Sorting vector of pairs
  practicalExample();  // Real-world example
  returnPairExample(); // Returning pair from function
  tieExample();        // Unpacking pairs with tie()

  return 0;
}

/*
 * ============================================
 * SUMMARY - PAIR IN STL
 * ============================================
 *
 * 1. Declaration: pair<type1, type2> name;
 *
 * 2. Access elements:
 *    - .first  -> First element
 *    - .second -> Second element
 *
 * 3. Create pairs:
 *    - Direct: pair<int,int> p = {1, 2};
 *    - make_pair: auto p = make_pair(1, 2);
 *    - Constructor: pair<int,int> p(1, 2);
 *
 * 4. Comparisons:
 *    - Compares lexicographically (first, then second)
 *    - Supports: ==, !=, <, >, <=, >=
 *
 * 5. Common operations:
 *    - swap(p1, p2) - Swap two pairs
 *    - tie(a, b) = p - Unpack pair into variables
 *
 * 6. Time Complexity: O(1) for all operations
 *
 * 7. Space Complexity: O(1) - stores only 2 elements
 *
 * ============================================
 */