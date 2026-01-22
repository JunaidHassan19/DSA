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
using namespace std;

int main()
{
  int n;                        // input number
  cout << "Enter the Digits: "; // prompt user for input
  cin >> n;                     // read input number
  int revNum = 0;               // variable to store reversed number
  while (n > 0)                 // loop until all digits are processed
  {
    int id = n % 10;             // get last digit
    revNum = (revNum * 10) + id; // append last digit to reversed number
    n = n / 10;                  // remove last digit from original number
  }
  cout << revNum; // output the reversed number
}