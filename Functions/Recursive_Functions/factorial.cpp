#include <iostream>
using namespace std;

int factorial(int a);

int main()
{
	int num = 0;
	cout << "Enter a num: ";
	cin >> num;

	cout << num << "! = " << factorial(num) << endl;

	return 0;
}

int factorial(int a)
{
	if (a == 0)
	{
		return 1;
	}
	else 
	{
		return a * factorial(a - 1);
	}
}
