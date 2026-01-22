/*
 * ============================================
 * REVERSE DIGITS OF A NUMBER
 * ============================================
 *
 * Problem:
 * - Given an integer n, reverse its digits.
 *
 * Examples:
 * - n = 12345  -> 54321
 * - n = 1000   -> 1
 * - n = -120   -> -21
 *
 * Notes:
 * - We handle negative numbers by reversing the absolute value
 *   and then re-applying the sign.
 * - Leading zeros are removed automatically in integer arithmetic.
 */

#include <iostream>
#include <climits>
using namespace std;

// Reverse digits of an integer (LeetCode style)
int reverseDigits(int n)
{
  int revNum = 0;
  while (n != 0)
  {
    int digit = n % 10;
    n /= 10;

    // Check overflow before multiplying/adding
    if (revNum > INT_MAX / 10 || (revNum == INT_MAX / 10 && digit > 7))
      return 0;
    if (revNum < INT_MIN / 10 || (revNum == INT_MIN / 10 && digit < -8))
      return 0;

    revNum = revNum * 10 + digit;
  }
  return revNum;
}

int main()
{
  int n;
  cin >> n;
  cout << reverseDigits(n);
  /*
    int revNum = 0;
    while (n > 0)
    {
      int id = n % 10;
      revNum = (revNum * 10) + id;
      n = n / 10;
    }
    cout << revNum;
    */
}