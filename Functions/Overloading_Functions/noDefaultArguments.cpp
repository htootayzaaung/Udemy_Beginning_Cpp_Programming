#include <iostream>
using namespace std;

double calc_cost(double base_cost, double tax_rate);

int main()
{
  cout << "cost: " << calc_cost(100.0, 0.06) << endl;

  return 0;
}

double calc_cost(double base_cost, double tax_rate)
{
  return base_cost += (base_cost * tax_rate);
}
