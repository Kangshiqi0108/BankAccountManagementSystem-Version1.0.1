#include<bits/stdc++.h>
#include"Account.h"
#include"CreditAccount.h"
#include"SavingsAccount.h"
using namespace std;
vector<Account*>s;
int find(string id, string AccountType) {
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i]->getid() == id && s[i]->getaccounttype() == AccountType)
			return i;

	}
}
int main() {
	cout << "Welcome to the bank management system!" << endl;
	cout << "cmdlist:" << endl <<
		"OpenNewAccount//credit:id,rate,date,AccountType,interest,overdraft,debt" << endl
		<< "SavingsAccount : id, rate, date, AccountType, balance, interest" << endl
		<< "deposit" << endl <<
		"withdraw" << endl <<
		"checkinterest" << endl <<
		"getmoney" << endl << "returnmoney" << endl <<
		"paybackinterest" << endl;
	while (1) {
		string cmd;
		cout << "Pleaae enter your your cmd.";
		cin >> cmd;
		switch (cmd[0])
		{
		case'o': {
			string id, AccountType;
			float rate, interest, overdraft, debt, balance;
			int year, month, day;
			cout << "What kind of account do you want to open?" << endl;
			cin >> AccountType;
			if (AccountType[0] == 'C')
			{
				cout << "Please enter the id,rate,date,interest,overdraft,debt" << endl;
				cin >> id >> rate >> year >> month >> day >> interest >> overdraft >> debt;
				Date d(year, month, day);
				Account* pt = new CreditAccount(id, rate, d, AccountType, interest, overdraft, debt);
				s.push_back(pt);
			}
			else {
				cout << "Please enter the id,rate,date,balance,interest" << endl;
				cin >> id >> rate >> year >> month >> day >> balance >> interest;
				Date d(year, month, day);
				Account* pt = new SavingsAccount(id, rate, d, AccountType, balance, interest);
				s.push_back(pt);

			}
		}; break;
		case'd': {
			cout << "Please enter your id,value and the date" << endl;
			string id;
			cin >> id;
			int i = find(id, "SavingsAccount");
			SavingsAccount* pt = dynamic_cast<SavingsAccount*>(s[i]);
			int year, month, day;
			float value;
			cin >> value;

			cin >> year >> month >> day;
			Date date(year, month, day);
			pt->deposit(value, date);
		}; break;
		case'w':
		{
			cout << "Please enter your id,value and the date" << endl;
			string id;
			cin >> id;
			int i = find(id, "SavingsAccount");
			SavingsAccount* pt = dynamic_cast<SavingsAccount*>(s[i]);
			int year, month, day;
			float value;
			cin >> value;

			cin >> year >> month >> day;
			Date date(year, month, day);
			pt->withdraw(value, date);
		}; break;
		case'c': {
			cout << "Please enter your id" << endl;
			string id;
			cin >> id;
			int i = find(id, "SavingsAccount");
			SavingsAccount* pt = dynamic_cast<SavingsAccount*>(s[i]);
			cout << pt->getinterest();

		}; break;
		case'g': {
			cout << "Please enter your id,value and the date" << endl;
			string id;
			cin >> id;
			int i = find(id, "CreditAccount");
			CreditAccount* pt = dynamic_cast<CreditAccount*>(s[i]);
			int year, month, day;
			float value;
			cin >> value;

			cin >> year >> month >> day;
			Date date(year, month, day);
			pt->Getmoney(value, date);
		}; break;
		case'r': {
			cout << "Please enter your id,value and the date" << endl;
			string id;
			cin >> id;
			int i = find(id, "CreditAccount");
			CreditAccount* pt = dynamic_cast<CreditAccount*>(s[i]);
			int year, month, day;
			float value;
			cin >> value;

			cin >> year >> month >> day;
			Date date(year, month, day);
			pt->Returnmoney(value, date);
		}; break;
		case'p': {
			cout << "Please enter your id,value" << endl;
			string id;
			cin >> id;
			int i = find(id, "CreditAccount");
			CreditAccount* pt = dynamic_cast<CreditAccount*>(s[i]);
			float value;
			cin >> value;
			pt->Returninterest(value);
		}; break;
		}
		cout << endl;
		for (int i = 0; i < s.size(); i++) {
			cout << s[i]->getid() << " " << s[i]->getaccounttype() << endl;

		}
	}
}
/*cmdlist:
	OpenNewAccount//credit:id,rate,date,AccountType,interest,overdraft,debt
	SavingsAccount:id,rate,date,AccountType,balance,interest
	deposit
	withdraw
	checkinterest
	getmoney
	returnmoney
	paybackinterest
*/