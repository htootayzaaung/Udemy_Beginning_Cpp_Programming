#include <iostream>
using namespace std;

int main()
{
	const double tax_rate = 0.06;
	int number_of_small_rooms = 0;
    int number_of_large_rooms = 0;
	const int small_room_charges = 25;
    const int large_room_charges = 35;
	const int estimate_valid_days = 30;

    cout << "Estimate for carpet cleaning service:\nNumber of small rooms: ";
	cin >> number_of_small_rooms;
    cout << "Number of large rooms: ";
    cin >> number_of_large_rooms;
	cout << "Price small per small room: $" << small_room_charges << endl;
	cout << "Price small per large room: $" << large_room_charges << endl;

    int cost = (number_of_small_rooms * small_room_charges) + (number_of_large_rooms * large_room_charges);
    double tax = (double) cost * tax_rate;

    cout << "Cost: $" << cost << endl;
	cout << "Tax: $" << tax << endl; 
	cout << "_____________________________________" << endl;
	
	cout << "Total estimate: $" << cost + tax << endl;
	cout << "This estimate is valid for " << estimate_valid_days << " days" << endl;

    return 0; 
}
