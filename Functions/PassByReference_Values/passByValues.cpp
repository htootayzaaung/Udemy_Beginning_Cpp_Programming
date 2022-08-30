#include <iostream>
#include <string>
#include <vector>

using namespace std;

void assign_int_1000(int num);

void assign_string_changed(string s);

void clear_string(vector <string> v);

void print_vector(vector <string> v);

void assign_int_1000(int num)
{
  num = 1000;
}

void assign_string_changed(string s)
{
  s = "Changed";
}

void clear_string(vector <string> v)
{
  v.clear();
}

void print_vector(vector <string> v)
{
  for (auto s : v)
  {
    cout << s << " ";
  }
  cout << endl;
}

int main()
{
  int num1 {10};
  int num2 {20};

  cout << "num before calling assign_int_1000: " << num1 << endl;
  assign_int_1000(num1);
  cout << "num after calling assign_int_1000: " << num1 << endl << endl;

  cout << "num before calling assign_int_1000: " << num2 << endl;
  assign_int_1000(num2);
  cout << "num after calling assign_int_1000: " << num2 << endl << endl;

  string name {"Frank"};

  cout << "name before calling assign_string_changed: " << name << endl;
  assign_string_changed(name);
  cout << "name after calling assign_string_changed: " << name << endl << endl;

  vector <string> three_stooges{"Larry", "Moe", "Curly"};
  cout << "Three stooges before calling clear_string: ";
  print_vector(three_stooges);
  clear_string(three_stooges);
  cout << "Three stooges after calling clear_string: ";
  print_vector(three_stooges);
  cout << endl;

  return 0;
}
