#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
  char first_name[20]{};
  char last_name[20]{};
  char full_name[50]{};

  cout << first_name << endl << last_name << endl << full_name << endl;

  cout << "Please enter your firstname: ";
  cin >> first_name;

  cout << "Please enter your lastname: ";
  cin >> last_name;

  cout << "Enter your fullname: ";
  cin.getline(full_name, 50);
  
  cout << "firstname: " << first_name << endl;
  cout << "lastname: " << last_name << endl;
  cout << "fullname: " << full_name << endl;

  return 0;
}
