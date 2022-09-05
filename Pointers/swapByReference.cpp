#include <iostream>
using namespace std;

void swap(int *a, int *b);

void printAandB(int *num1, int *num2);

int main()
{
	int a {1}, b {9};
	printAandB(&a, &b);
	swap(&a, &b);
	printAandB(&a, &b);
	return 0;
}


void swap(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void printAandB(int *num1, int *num2)
{
	cout << "a: " << *num1 << endl;
	cout << "b: " << *num2 << endl;
}
