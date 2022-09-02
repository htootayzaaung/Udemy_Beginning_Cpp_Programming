#include <iostream>
using namespace std;

int main()
{
	string s1 {"Frank"};
	string s2 {"Frank"};

	string *p1 {&s1};
	string *p2 {&s2};
	string *p3 {&s1};
	
	cout << "Comparing two pointers memory-address wise: " << endl;
	cout << (p1 == p2) << "(false), because p1 = &s1 and p2 = &s2." << endl;
	cout << (p1 == p3) << "(true), because p1 = &s1 and p2 = &s2." << endl;

	return 0;
}
