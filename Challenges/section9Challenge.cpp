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
  char choice;
  vector<int> emptyVector {};

  while(1)
  {
    cout << "P - Print numbers\nA - Add a number\nM - Display mean of the numbers\nS - Display the smallest number\nL - Display the largest number\nQ - Quit\n\nEnter your choice: ";
    cin >> choice;

    if (choice == 'p' or choice == 'P')
    {
      printVector(emptyVector);
    }
    else if (choice == 'a' or choice == 'A')
    {
      int inputNum {0};
      cout << "Enter a number: ";
      cin >> inputNum;
      emptyVector.push_back(inputNum);
      cout << inputNum << " added" << endl;
    }
    else if (choice == 'm' or choice == 'M')
    {
      calculateMean(emptyVector);
    }
    else if (choice == 's' or choice == 'S')
    {
      cout << "Smallest integer: " << findSmallest(emptyVector) << endl;
    }
    else if (choice == 'l' or choice == 'L')
    {
      cout << "Largest integer: " << findLargest(emptyVector) << endl;
    }
    else if (choice == 'q' or choice == 'Q')
    {
      cout << "Goodbye" << endl;
      exit(0);
    }
    else
    {
      cout << "Unknown selection, please try again!" << endl;
    }

    cout << endl;
  }

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
