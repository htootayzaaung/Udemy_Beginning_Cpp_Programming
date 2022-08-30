#include <iostream>
using namespace std;

int main()
{
	
	int test_scores [5] {100, 95, 99, 87, 88};

	for (int i = 0; i < 5; i++)
	{
		cout << test_scores[i] << " ";
	}
	
	cout << endl;
	
	//initialize 3 and 5 at indexes 0 and 1 respectively, and the remaining to 0 
	int high_score_per_level [10] {3, 5};				
	
	for (int i = 0; i < 10; i++)
	{
		cout << high_score_per_level[i] << " ";
	}
	
	cout << endl;
	
	const int weeks_in_year {52};

	//initiialize all to zero
	double average_temperature_weekly [weeks_in_year] {0};

	for (int i = 0; i < weeks_in_year; i++)
	{
		cout << average_temperature_weekly[i] << " ";
	}

	//size automatically calculated
	int another_array [] {1, 2, 3, 4, 5};
	
	cout << endl;
	
	return 0;
}
