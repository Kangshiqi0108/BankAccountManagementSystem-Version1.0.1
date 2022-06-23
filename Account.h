#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<bits/stdc++.h>
#include"Accumulator.h"
using namespace std;
class Account {
private:
	string id;
protected:
	string AccountType;
	float rate;
	Accumulator acc;
public:
	Account() {};
	//virtual void vfunc() = 0;
	Account(string id, float rate, const Date& date, string AccountType) :id(id), rate(rate), AccountType(AccountType), acc(date) {}
	virtual ~Account() {}
	string getid() { return id; }
	string getaccounttype() { return AccountType; }
	virtual void withdraw() {};

};
#endif // !ACCOUNT_H

