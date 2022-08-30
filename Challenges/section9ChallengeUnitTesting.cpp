#include <iostream>
#include <vector>
using namespace std;

void printVector(vector <int> vec);

void calculateMean(vector <int> vec);

void addNumber(vector <int> vec);

int findSmallest(vector <int> vec);

int findLargest(vector <int> vec);

int main()
{
  vector <int> vector1 {1, 2, 3, 4, 5};
  vector <int> vector2 {1, 3, 5, 7, 9, 7, 9};
  vector <int> emptyVector {};
  
  printVector(vector1);
  printVector(emptyVector);

  calculateMean(vector1);
  calculateMean(vector2);
  calculateMean(emptyVector);

  cout << "Smallest integer: " << findSmallest(vector1) << endl;
  cout << "Smallest integer: " << findSmallest(vector2) << endl;

  cout << "Lagrest integer: " << findLargest(vector1) << endl;
  cout << "largest integer: " << findLargest(vector2) << endl;

  return 0;
}

void printVector(vector <int> vec)
{
  if (vec.size() == 0)
  {
    cout << "[] - the list is empty" << endl;
  }

  else
  {
    cout << "[ ";

    for (int i = 0; i < vec.size(); i++)
    {
      cout << vec[i] << " ";
    }
  cout << "]" << endl;
  }
}

void calculateMean(vector <int> vec)
{
  double sum {0}, average {0};
  if (vec.size() == 0)
  {
    cout << "Unable to determine the largest number - list is empty" << endl;
  }

  else
  {
    for (int i = 0; i < vec.size(); i++)
    {
      sum += vec[i];
    }
    average = sum / vec.size();
    cout << "Average: " << average << endl;
  }
}

int findSmallest(vector <int> vec)
{
  int smallest = vec[0];

  for (int i = 0; i < vec.size(); i++)
  {
    if (vec[i] < smallest)
    {
      smallest = vec[i];
    }
  }
  return smallest;
}

int findLargest(vector <int> vec)
{
  int largest = vec[0];

  for (int i = 0; i < vec.size(); i++)
  {
    if (vec[i] > largest)
    {
      largest = vec[i];
    }
  }
  return largest;
}
