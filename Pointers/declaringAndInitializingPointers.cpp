#include <iostream>

int main()
{
	int *int_ptr {};
	double *double_ptr {nullptr};
	char *char_ptr {nullptr};
	string *strting_ptr {nullptr};

	return 0;
}

/*
_Always initialize pointers.

_Uninitialized pointers contain garbage data and can "point anywhere"

_Initializing to zero or nullptr (C++11) represents address zero; which
implies that the pointer is pointing nowhere.

_If you don't initialize a pointer to point to a variable or a function
then you should initialize it to "nullptr" to "make it null"
*/
