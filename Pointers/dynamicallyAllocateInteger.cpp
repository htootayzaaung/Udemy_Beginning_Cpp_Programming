#include <iostream>
using namespace std;

int main()
{
	int *int_ptr {nullptr};
	int_ptr = new int;			//dynamically allocates an integer on the heap

	cout << int_ptr << endl;
	cout << *int_ptr << endl;

	*int_ptr = 100;
	cout << *int_ptr << endl;
	delete int_ptr;				//frees the allocated storage on the heap

	return 0;
}
