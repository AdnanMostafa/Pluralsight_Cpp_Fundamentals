#include <vector>
#include <string>
#include "Transaction_Header.cpp"

class Account
{
private:
	int balance;
	std::vector<Transaction> log;
public:
	Account();
	std::vector<std::string> Report();
	bool Deposit(int amt);
	bool Withdraw(int amt);
	int GetBalance() {return balance;}
};

