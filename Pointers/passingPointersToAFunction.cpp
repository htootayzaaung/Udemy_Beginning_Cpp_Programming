#include <iostream>
using namespace std;

void double_data(int *int_ptr);

int main()
{
	int sample_int {2};
	
	for (int i = 1; i < 10; i++)
	{
		double_data(&sample_int);
	}

	cout << sample_int << endl;

	return 0;
}

void double_data(int *int_ptr)
{
	*int_ptr *= 2;
}
