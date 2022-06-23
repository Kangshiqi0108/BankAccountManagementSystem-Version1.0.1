#include"date.h"
Date Date::operator-(const Date& d) {
	Date c = Date(d.year - this->year, d.month - this->month, d.day - this->day);
	return c;
}