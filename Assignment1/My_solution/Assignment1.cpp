#include <iostream>

std::string printBlanks(int a);

int main()
{
  std::string inputString{};
  std::string currentString{};

  std::cout << "Enter a string: ";
  getline(std::cin, inputString);

  int blank_spaces = inputString.size() - 1;

  for (int i = 0; i < inputString.size(); i++)
  {
    currentString += inputString[i];

    if (i == 0)
    {
      std::cout << printBlanks(blank_spaces) << currentString << std::endl;
    }

    else if (i > 0)
    {
      blank_spaces -= 1;
      std::cout << printBlanks(blank_spaces) << currentString;
      for (int j = currentString.size() - 2; j >= 0; j--)
      {
        std::cout << currentString[j];

        if (j == 0)
        {
          std::cout << std::endl;
        }
      }
    }
  }

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
