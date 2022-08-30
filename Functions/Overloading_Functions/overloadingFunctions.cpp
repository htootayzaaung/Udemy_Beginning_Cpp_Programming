/*
In C++, we can have functions that have different parameter lists that have the
same name.

So rather than having many functions with different names, we can have the same
function that implements a version of the function for the each type of
parameter-set.

In software engineering, we have a principle called polymorphism, which means
many forms for the same concept. "Functions-overloading" is indeed an example of
"polymorphism".
*/

#include <iostream>
using namespace std;

int add_numbers(int a, int b);
double add_numbers(double a, double b);

int main()
{
  cout << add_numbers(10, 20) << endl;
  cout << add_numbers(10.0, 20.0) << endl;

  return 0;
}

int add_numbers(int a, int b)
{
  return a + b;
}

double add_numbers(double a, double b)
{
  return a + b;
}
