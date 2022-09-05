#include <iostream>
using namespace std;

void print(int *arr, size_t num_of_elements);

int *apply_all(int *arr1, size_t arr1_size, int *arr2, size_t arr2_size);

int main()
{
  const size_t array1_size{5};
  const size_t array2_size{3};

  int array1[] {1, 2, 3, 4, 5};
  int array2[] {10, 20, 30};

  cout << "Array 1: ";
  print(array1, array1_size);

  cout << "Array 2: ";
  print(array2, array2_size);

  int *results = apply_all(array1, array1_size, array2, array2_size);
  constexpr size_t results_size {array1_size * array2_size};

  cout << "Result: ";
  print(results, results_size);

  delete [] results;
  cout << endl;

  return 0;
}

void print(int *arr, size_t num_of_elements)
{
  cout << "[";
    for (size_t i = 0; i < num_of_elements; i++)
    {
      cout << arr[i] << " ";
      if (i == num_of_elements -1)
      {
        cout << arr[i]; 
      }
    }
  cout << "]";
  cout << endl;
}

int *apply_all(int *arr1, size_t arr1_size, int *arr2, size_t arr2_size)
{
  int *new_arr = new int [arr1_size * arr2_size];

  size_t i = 0;

  while (i < 15)
  {
    for (size_t j = 0; j < 5; j++)
    {
      for (size_t k = 0; k < 3; k++)
      {
        new_arr[i] = arr1[j] * arr2[k];
        i++;
      }
    }
  }

  return new_arr;
}
