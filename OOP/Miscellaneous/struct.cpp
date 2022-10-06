#include <iostream>
using namespace std;

struct Person
{
  string name;
  string get_name();
};

int main()
{
  Person p;
  p.name = "Frank";
  cout << p.get_name() << endl;

  return 0;
}

string Person::get_name()
{
  return name;
}
