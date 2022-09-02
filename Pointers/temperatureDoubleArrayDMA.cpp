#include <iostream>
using namespace std;

int main()
{
	double *temperature_array {nullptr};
	int arr_size {};
	
	cout << "Enter the number of temperatures: ";
	cin >> arr_size;
	
	temperature_array = new double[arr_size];

	for (int i = 0; i < arr_size; i++)
	{
		cout << "Enter a temperature: ";
		cin >> temperature_array[i]; 
	}
	
	for (int i = 0; i < arr_size; i++)
	{
		cout << temperature_array[i] << " ";
	}

	cout << endl;	
	
	delete [] temperature_array;

	return 0;
}
