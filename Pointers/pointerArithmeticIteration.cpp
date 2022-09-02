#include <iostream>
using namespace std;

int main()
{
	int scores [] {2, 4, 6, 8, 10};
	int *score_ptr {scores};
	
	for (int i = 0; i < 5; i++)
	{
		cout << *score_ptr << " ";
		score_ptr++;
	}
	
	cout << endl;
	
	return 0;
}
