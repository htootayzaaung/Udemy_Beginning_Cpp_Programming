#include <iostream>
using namespace std;

int main()
{
	const double tax_rate = 0.06;
	int number_of_rooms;
	const int room_charges = 30;
	const int estimate_valid_days = 30;

	cout << "Estimate for carpet cleaning service:\nNumber of rooms: ";
	cin >> number_of_rooms;
	cout << "Price per room: $" << room_charges << endl;
	
	int cost = number_of_rooms * room_charges;
	double tax = (double) cost * tax_rate;

	cout << "Cost: $" << cost << endl;
	cout << "Tax: $" << tax << endl; 
	cout << "_____________________________________" << endl;
	
	cout << "Total estimate: $" << cost + tax << endl;
	cout << "This estimate is valid for " << estimate_valid_days << " days" << endl;

	return 0; 
}
