#include <iostream>

int fibonacci(int n);

int main()
{
	int userInput {};
	std::cout << "Enter a maximum-term in a sequence: ";
	std::cin >> userInput;

	for (int i = 1; i <= userInput; i++)
	{
		std::cout << fibonacci(i) << " ";
	}
	std::cout << std::endl;

	return 0;
}

int fibonacci(int n)
{
	if (n <= 1)
	{
		return n;
	}
	return (fibonacci(n - 1) + fibonacci(n - 2));
}
