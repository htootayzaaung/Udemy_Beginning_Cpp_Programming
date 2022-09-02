#include <iostream>
using namespace std;

int main()
{
	int *array_ptr {nullptr};
	int size {};

	cout << "Enter array-size: ";
	cin >> size;

	array_ptr = new int[size];

	for (int i = 0; i < size; i++)
	{
		cout << "Enter a num: ";
		cin >> array_ptr[i];
	}	

	for (int i = 0; i < size; i++)
	{
		cout << array_ptr[i] << " "; 
	}
	cout << endl;
	
	delete [] array_ptr;
	
	return 0;
}

