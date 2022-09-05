#include <iostream>
#include <vector>

void printVector(std::vector <std::string> *v);

using namespace std;

int main()
{
	vector <string> three_stooges {"Larry", "Moe", "Curly"};
	printVector(&three_stooges);
	return 0;
}

void printVector(std::vector<std::string> *v)
{
	for (int i = 0; i < (*v).size(); i++)
	{
		cout << (*v)[i] << " ";
	}
	/*
	for (auto str: *v)
	{
		cout << str << " ";
	}
	*/
	cout << endl;
}
