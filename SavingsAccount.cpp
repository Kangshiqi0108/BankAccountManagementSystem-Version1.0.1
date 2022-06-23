#include"SavingsAccount.h"
void SavingsAccount::deposit(float value, const Date& date) {
	acc.record(date);
	interest += balance * rate * acc.relativeday;
	balance += value;

}
void SavingsAccount::withdraw(float value, const Date& date) {
	acc.record(date);
	interest += balance * rate * acc.relativeday;
	balance -= value;
}