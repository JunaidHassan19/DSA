// Basic Time Complexity & Space Complexity in C++

/*
  ==========================================
  TIME COMPLEXITY - How long does code take to run?
  ==========================================

  It tells us how the running time increases as input size (n) grows.

  BASIC TIME COMPLEXITIES:
  ------------------------
  O(1)   -> Constant  - Fixed time, doesn't depend on n
  O(n)   -> Linear    - Time grows with n (single loop)
  O(n²)  -> Quadratic - Time grows with n*n (nested loops)

  SIMPLE RULES:
  -------------
  1. Ignore constants: O(5n) = O(n)
  2. Keep the largest term: O(n² + n) = O(n²)
*/

/*
  ==========================================
  SPACE COMPLEXITY - How much memory is used?
  ==========================================

  It tells us how much extra memory our code needs.

  SIMPLE RULES:
  -------------
  - Single variable (int, float) = O(1)
  - Array of size n = O(n)
*/

#include <iostream>
using namespace std;

int main()
{
  int n = 5;

  // ========================================
  // EXAMPLE 1: O(1) - Constant Time
  // ========================================
  // Only 1 operation, no matter what n is
  int sum = n + 10;
  cout << "Sum: " << sum << endl;
  // Time: O(1), Space: O(1)

  // ========================================
  // EXAMPLE 2: O(n) - Linear Time
  // ========================================
  // Loop runs n times
  cout << "Numbers: ";
  for (int i = 1; i <= n; i++)
  {
    cout << i << " "; // Runs n times
  }
  cout << endl;
  // Time: O(n), Space: O(1)

  // ========================================
  // EXAMPLE 3: O(n²) - Quadratic Time
  // ========================================
  // Nested loop: outer n times × inner n times = n²
  cout << "Pairs: " << endl;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cout << "(" << i << "," << j << ") ";
    }
    cout << endl;
  }
  // Time: O(n²), Space: O(1)

  return 0;
}

/*
  SUMMARY:
  --------
  O(1)  = No loop, just simple operations
  O(n)  = One loop that runs n times
  O(n²) = Two nested loops, each runs n times
*/
