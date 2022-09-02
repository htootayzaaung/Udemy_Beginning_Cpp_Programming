#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cout << "__________________________" << endl;

	int score {100};
	int *score_ptr {&score};

	cout << "*score_ptr: " <<  *score_ptr << endl;

	*score_ptr = 200;
	cout << "*score_ptr: " << *score_ptr << endl;
	cout << "score: " << score << endl;

	cout << "__________________________" << endl;

	double high_temp {100.7};
	double low_temp {37.4};
	double *temp_ptr {&high_temp};

	cout << *temp_ptr << endl;
	temp_ptr = &low_temp;
	cout << *temp_ptr << endl;

	cout << "__________________________" << endl;

	string name {"Frank"};
	string *string_ptr {&name};
	cout << *string_ptr << endl;
	name = "James";
	cout << *string_ptr << endl;

	cout << "__________________________" << endl;

	vector <string> stooges {"Larry", "Moe", "Curly"};
	vector <string> *vector_ptr {nullptr};

	vector_ptr = &stooges;

	for (int i = 0; i < (*vector_ptr).size(); i++)
	{
		cout << (*vector_ptr)[i] << endl;
	}

	cout << "__________________________" << endl;

	for (auto stooge : *vector_ptr)
	{
		cout << stooge << endl;
	}

	cout << "__________________________" << endl;

	return 0;
}
