#include <iostream>
using namespace std;

int main()
{
	int *p;
	cout << "Garbage value of p is: " << p << endl;
	cout << "Garbage memory-address value of p is: " << &p << endl;
	cout << "sizeof(p): " << sizeof(p) << endl;
	p = nullptr;
	cout << "Value of p is: " << p << endl;
	return 0;
}
