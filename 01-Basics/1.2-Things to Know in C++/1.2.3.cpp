#include <iostream>
using namespace std;
// Write a program that takes an input of age
// and print if you are adult or not.

int main()
{
  int x;
  cout << "Enter your age: ";
  cin >> x;

  if (x < 18)
  {
    cout << "You are minor.";
  }
  else
  {
    cout << "You are Adult";
  }

  return 0;
}

/**********Example 2nd ***********/
#include <iostream>
using namespace std;

/*
A school has following rules for grading system:
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
Ask user to enter marks and print the corresponding grade.
*/
int main()
{
  int x;
  cout << "Enter your Marks: ";
  cin >> x;

  if (x < 25 && x > 0)
  {
    cout << "Grade F";
  }
  else if (x >= 25 && x <= 44)
  {
    cout << "Grade E";
  }
  else if (x >= 45 && x <= 49)
  {
    cout << " Grade D";
  }
  else if (x >= 50 && x <= 59)
  {
    cout << "Grade C";
  }
  else if (x >= 60 && x <= 79)
  {
    cout << " Grade B";
  }
  else if (x >= 80 && x <= 100)
  {
    cout << "Grade A";
  }

  return 0;
}
/********Example 3rd**********/
#include <iostream>
using namespace std;
/*
Make the age form the user and then decide accordingly
1. if ge < 18,
print -> not eligble for job
2. if age >= 18 ,
print -> eligible  for a job
3. if age >= 55 and  <= 57 ,
print -> eligible for a job, but retirement soonm,
4. if age > 57
print -> ertirement time
*/

int main()
{
  int x;
  cout << "Enter your age: ";
  cin >> x;

  if (x < 18)
  {
    cout << "No eligile for job";
  }
  else if (x >= 18 && x <= 57)
  {
    cout << "Eligible for a job";
    if (x >= 55 && x <= 57)
    {
      cout << ", but retirement soon";
    }
  }
  else
  {
    cout << "Retirement sooooooon!";
  }
}