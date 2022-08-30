#include <iostream>

#include <iomanip>

#include <ios>

using namespace std;

int main ()

{

    //Initialising the pi as double

    double pi = 3.141592653589793238;

    cout << "Value of pi before setting the precision: " << pi << endl;

    cout << "Setting the precision using" << " setprecision to 1: " << setprecision(1);

    cout << pi << endl;


    cout << "Setting the precision using" << " setprecision to 2: " << setprecision(2);

    cout << pi << endl;


    cout << "Setting the precision using" << " setprecision to 5: " << setprecision(5);

    cout << pi << endl;


    cout << "Setting the precision using" << " setprecision to 7: " << setprecision(7);

    cout << pi << endl;


    cout << "Setting the precision using" << " setprecision to 0: " << setprecision(0);

    cout << pi << endl;


    cout << "Setting the precision using" << " setprecision to -1: " << setprecision(-1);

    cout << pi << endl;


    cout << "Setting the precision using" << " setprecision to -3: " << setprecision(-3);

    cout << pi << endl;

    return 0;

}
