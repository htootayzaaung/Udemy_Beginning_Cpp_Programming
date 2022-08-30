#include <iostream>
using namespace std;

double calc_cost(double base_cost, double tax_rate = 0.06);

int main()
{
  cout << "cost: " << calc_cost(200.0) << endl;               //will use the derfault tax-rate i.e 0.06
  cout << "cost: " << calc_cost(100.0, 0.08) << endl;         //alternatively, if the tax-rate is supplied it will use the tax-rate, 0.08

  return 0;
}

double calc_cost(double base_cost, double tax_rate)
{
  return base_cost += (base_cost * tax_rate);
}
