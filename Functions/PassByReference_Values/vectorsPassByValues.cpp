#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> v);

int main()
{
  vector <int> data {1, 2, 3, 4, 5};
  print(data);

  return 0;
}

void print(vector<int> v)
{
  for (auto an_element : v)
  {
    cout << an_element << endl;
  }
}
