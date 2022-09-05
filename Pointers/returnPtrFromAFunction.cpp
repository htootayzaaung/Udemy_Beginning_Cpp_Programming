#include <iostream>
using namespace std;

int *largest_int(int *int_ptr1, int *int_ptr2);

int main()
{
	int num1 {2}, num2 {4};
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	cout << "The bigger num: " << *largest_int(&num1, &num2) << endl; 
	return 0;
}

int *largest_int(int *int_ptr1, int *int_ptr2)
{
	if (*int_ptr1 > *int_ptr2)
	{
		return int_ptr1;
	}
	else
	{
		return int_ptr2;
	}
}
