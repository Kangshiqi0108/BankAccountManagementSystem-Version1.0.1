#ifndef CREDITACCOUNT_H
#define CREDITACCOUNT_H
#include<bits/stdc++.h>
#include"Account.h"
using namespace std;
class CreditAccount :public Account {
private:
	float interest;
	float overdraft;
	float debt;
public:
	CreditAccount(string id, float rate, const Date& date, string AccountType, float interest, float overdraft, float debt) :Account(id, rate, date, AccountType), interest(interest), overdraft(overdraft), debt(debt) {}
	float Getmoney(float value, const Date& date);
	float Returnmoney(float value, const Date& date);
	float Returninterest(float value);
	~CreditAccount() {}
	string gettype() { return AccountType; }
};
#endif // !CREDITACCOUNT_H

