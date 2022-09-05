#include <iostream>

class Account
{
	//attributes:
	-
	-
	-

	//methods:
	-
	-
	-
	
	Account frank_account;
	Account jim_account;

	Account accounts[] {frank_account, jim_account};
	
	std::vector <Account> accounts1 {frank_account};

	accounts1.push_back(jim_account);	
};
