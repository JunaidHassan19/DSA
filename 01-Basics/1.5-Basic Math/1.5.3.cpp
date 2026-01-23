/*
 * ============================================
 * CHECK IF A NUMBER IS PALINDROME
 * ============================================
 *
 * A palindrome number reads the same forward and backward.
 * Examples:
 * - 121 -> Palindrome
 * - 123 -> Not Palindrome
 * - 1001 -> Palindrome
 */

#include <iostream>
using namespace std;

// Returns true if n is a palindrome number
bool isPalindrome(int n)
{
  if (n < 0)
    return false; // Negative numbers are not palindromes

  int original = n;
  int reversed = 0;

  while (n > 0)
  {
    int digit = n % 10;
    reversed = reversed * 10 + digit;
    n /= 10;
  }

  return original == reversed;
}

int main()
{
  int n;
  cin >> n;

  if (isPalindrome(n))
    cout << "Palindrome";
  else
    cout << "Not Palindrome";

  return 0;
}
