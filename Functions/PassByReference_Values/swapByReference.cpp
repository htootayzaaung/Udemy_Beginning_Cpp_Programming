#include <iostream>
using namespace std;

void swap(int &a, int&b);

void print_nums(int num1, int num2);

int main()
{
	int x {10}, y {20};
	print_nums(x, y);
	swap(x, y);
	print_nums(x, y);
	return 0;
}

void swap(int &a, int&b)
{
	int temp = a;
	a = b;
	b = temp;
}

void print_nums(int num1, int num2)
{
	cout << "x: " << num1 << endl;
	cout << "y: " << num2 << endl;
}
