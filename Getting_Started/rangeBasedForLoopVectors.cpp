#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector <double> temps {87.2, 77.1, 80.0, 72.5};

  double average_temp {};
  double sum {};

  for (auto temp : temps)
  {
    sum += temp;
  }

  /*
  Alternately,

  for (auto temp : {87.2, 77.1, 80.0, 72.5})
  {
    sum += temp;
  }

  will work the same!
  */
  average_temp = sum / temps.size();

  cout << "Average temperature: " << average_temp << endl;

  return 0;
}
