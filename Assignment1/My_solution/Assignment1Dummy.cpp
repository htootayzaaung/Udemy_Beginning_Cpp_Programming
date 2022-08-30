#include <iostream>

std::string printBlanks(int a);

int main()
{
  std::cout << 3 - 1 << std::endl;
  std::cout << 4 - 1 << std::endl;
  std::cout << 5 - 1 << std::endl;
  std::cout << 6 - 1 << std::endl;

  std::cout << printBlanks(2) << "A" << std::endl;
  std::cout << printBlanks(1) << "ABA" << std::endl;
  std::cout << "ABCBA" << std::endl;

  return 0;
}

std::string printBlanks(int a)
{
  std::string blanks {};
  for (int i = 0; i < a; i++)
  {
    blanks += " ";
  }
  return blanks;
}
