#include <bits/stdc++.h>
using namespace std;

// Function to print the alphabet pyramid pattern
void print(int N)
{
  // Loop for each row
  for (int i = 0; i < N; i++)
  {

    // Print leading spaces
    for (int j = 0; j < N - i - 1; j++)
    {
      cout << " ";
    }

    // Initialize character to start from 'A'
    char ch = 'A';

    // Calculate midpoint of the row
    int breakpoint = (2 * i + 1) / 2;

    // Print the characters in the row
    for (int j = 1; j <= 2 * i + 1; j++)
    {
      cout << ch;

      // Increment character till the midpoint, then decrement
      if (j <= breakpoint)
        ch++;
      else
        ch--;
    }

    // Print trailing spaces
    for (int j = 0; j < N - i - 1; j++)
    {
      cout << " ";
    }

    // Newline after each row
    cout << endl;
  }
}

// Driver code
int main()
{
  int N = 5;
  print(N);
  return 0;
}
/*
Output (N=5):
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

Pattern: Alphabet Pyramid | TC: O(n²) | SC: O(1)
- Each row has (2*i+1) characters
- Letters go A→B→C... up to midpoint, then C→B→A back down
*/
