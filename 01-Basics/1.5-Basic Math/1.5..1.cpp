/*
 * ============================================
 * COUNT DIGITS IN A NUMBER
 * ============================================
 * - Repeatedly divide by 10 to count digits.
 * - Also prints each digit from right to left.
 * - Problem Link: https://www.geeksforgeeks.org/problems/count-digits-1606889545/1
 */

#include <iostream>
#include <math.h>
using namespace std;

int count(int n)
{
  int cnt = 0;
  while (n > 0)
  {
    int lastDigit = n % 10; // get last digit
    cnt = cnt + 1;
    n = n / 10;
    cout << lastDigit << " "; // print last digit
  }
  return cnt;
  // cout << "You entered " << cnt << " Digits ";
}

int main()
{
  long x;
  cout << "Enter some digits: ";
  cin >> x;
  int totalDigits = count(x);
  cout << "\nTotal digits: " << totalDigits << endl;
}