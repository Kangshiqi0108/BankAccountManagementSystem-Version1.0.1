#include"CreditAccount.h"
float CreditAccount::Getmoney(float value, const Date& date) {
	if ((value + debt) > overdraft)cout << "Not Ok!";
	else {
		acc.record(date);
		interest += debt * rate * acc.relativeday;
		debt += value;
	}
	return debt;


}
float CreditAccount::Returnmoney(float value, const Date& date) {
	acc.record(date);
	interest += debt * rate * acc.relativeday;
	debt -= value;
	return debt;
}
float CreditAccount::Returninterest(float value) {
	interest -= value;
	return interest;

}