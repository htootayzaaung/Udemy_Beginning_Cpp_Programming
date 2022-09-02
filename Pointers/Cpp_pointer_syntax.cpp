#include <iostream>

using namespace std;

int main()
{
	int *int_ptr {nullptr};		//Initialization

	int_ptr = new int;		//Dynamically allocate an intger pointer-variable on the heap
	
	cout << int_ptr << endl;	

	delete int_ptr;			//Freeing the dynamically allocated pointer-varaible from the heap

	return 0;
}
