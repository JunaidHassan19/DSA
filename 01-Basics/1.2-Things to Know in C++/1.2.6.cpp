#include <iostream>
using namespace std;

int main()
{
  // 2D Array Declaration and Initialization
  int arr[3][4] = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12}};

  int rows = 3;
  int cols = 4;

  // Printing the 2D array
  cout << "2D Array Elements:" << endl;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  // Accessing a specific element
  cout << "\nElement at row 1, col 2: " << arr[1][2] << endl;

  // Modifying an element
  arr[0][0] = 100;
  cout << "After modifying arr[0][0]: " << arr[0][0] << endl;

  return 0;
}