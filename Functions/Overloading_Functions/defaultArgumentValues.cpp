#include <iostream>
using namespace std;

double calc_cost(double base_cost, double tax_rate = 0.06, double shipping_cost = 3.50);

int main()
{
  cout << "cost: " << calc_cost(100.0, 0.08, 4.25) << endl;                     //doesn't use any derfault arguments
  cout << "cost: " << calc_cost(100.0, 0.08) << endl;                           //uses default shipping_cost value
  cout << "cost: " << calc_cost(200.0) << endl;                                 //uses default tax_rate and shipping_cost values

  return 0;
}

double calc_cost(double base_cost, double tax_rate, double shipping_cost)
{
  return base_cost += (base_cost * tax_rate) + shipping_cost;
}
