#include <iostream>
#include <vector>
using namespace std;

int calculate_pairs(vector <int> vec);

int main()
{
  vector <int> vector1 {1, 2, 3};
  vector <int> vector2 {2, 4, 6, 8};

  cout << "Sum of the product of all pairs: " << endl;
  cout << vector1[vector1.size() - 1] << endl << vector2[vector2.size() - 1] << endl;

  cout << "Vector 1: " << calculate_pairs(vector1) << endl;
  cout << "Vector 2: " << calculate_pairs(vector2) << endl;

  return 0;
}

int calculate_pairs(vector <int> vec)
{
  int result {0};

  for (int i = 0; i < vec.size(); i++)
  {
    for (int j = i; j < vec.size(); j++)
    {
      result += (vec[i] * vec[j]);
      if (i == j)
      {
        result -= (vec[i] * vec[j]);
      }
    }
  }
  return result;
}
