#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int num);

void print(double num);

void print(string phrase);

void print(string string1, string string2);

void print(vector <string> a_vector);

int main()
{
  print(100);
  print(4.0);
  print("a");
  print("Hello World!");
  print("Hello", "World!");
  print({"You", "will", "be", "a", "champion", "yet!"});

  return 0;
}

void print(int num)
{
  cout << "Printing int: " << num << endl;
}

void print(double num)
{
  cout << "Printing double: " << num << endl;
}

void print(string phrase)
{
  cout << "Printing string: " << phrase << endl;
}

void print(string string1, string string2)
{
  cout << "Printing 2 strings: " << string1 << " and " << string2 << endl;
}

void print(vector <string> a_vector)
{
  for (string a_string : a_vector)
  {
    cout << a_string << " ";
  }
  cout << endl;
}
