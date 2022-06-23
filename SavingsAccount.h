#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include"Account.h"
class SavingsAccount :public Account {
private:
	float balance;
	float interest;
public:
	SavingsAccount(string id, float rate, const Date& date, string AccountType, float balance, float interest) :Account(id, rate, date, AccountType), interest(interest), balance(balance) {}
	void deposit(float value, const Date& date);
	void withdraw(float value, const Date& date);
	float getinterest() { return interest; }
	~SavingsAccount() {}
	string gettype() { return AccountType; }
};
#endif // !
