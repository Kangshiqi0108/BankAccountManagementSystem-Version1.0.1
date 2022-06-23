#ifndef DATE_H
#define DATE_H
#include<bits/stdc++.h>
using namespace std;
class Date {
private:
	int year, month, day;
public:
	Date() {}
	Date(int year, int month, int day) :year(year), month(month), day(day) {}
	~Date() {}
	Date operator-(const Date& d);
	int getdays() {
		return year * 365 + month * 30 + day;
	}
};
#endif // !DATE_H
