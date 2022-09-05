#include <iostream>

using namespace std;

int *create_array(size_t, int);

void printArray(const int *arr, size_t size);

int main()
{
	int *array1 = create_array(4, 0);
	printArray(array1, 4);
	delete [] array1;

	int *array2 = create_array(50, 1);
	printArray(array2, 50);
	delete [] array2;
	return 0;
}

int *create_array(size_t size, int init_value = 0)
{
	int *new_storage {nullptr};

	new_storage = new int[size];
	
	for (size_t i{0}; i < size; i++)
	{
		*(new_storage + i ) = init_value;
	}

	return new_storage;
}

void printArray(const int *arr, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
	
