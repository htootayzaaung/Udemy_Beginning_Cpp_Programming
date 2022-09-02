#include <iostream>
using namespace std;

int main()
{
	int scores []{100, 95, 89};
	int *score_ptr {scores};

	cout << "Array subscript notation: " << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << scores[i] << " ";
	}

	cout << endl << endl;

	cout << "Pointer subscript notation: " << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << score_ptr[i] << " ";
	}

	cout << endl << endl;

	cout << "Pointer offset notation: " << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << *(score_ptr + i) << " ";
	}

	cout << endl << endl;

	cout << "Array offset notation: " << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << *(scores + i) << " ";
	}

	cout << endl << endl;

	return 0;
}
