#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector <string> stooges {"Larry", "Moe", "Curly"};

  cout << "Assigning the copy-variable does not changes the contents of the original vector." << endl;

  for (auto str: stooges)
  {
  	str = "Funny";			       //assigns the copy-variable "str"
  }

  for (auto str: stooges)
  {
  	cout << str << " ";		    //Still, "Larry", "Moe", "Curly"
  }

  cout << endl << endl;

  cout << "Assigning the referenced-copy-variable changes the contents of the original vector." << endl;

  for (auto &str: stooges)
  {
  	str = "Funny";			     //Changes the actual elements in the vector as it is referenced
  }

  for (auto str: stooges)
  {
  	cout << str << " ";		  //"Funny", "Funny", "Funny"
  }

  cout << endl;

  return 0;
}
