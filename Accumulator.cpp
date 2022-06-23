#include"Accumulator.h"
void Accumulator::record(const Date& date) {
	Date c = lastdate - date;
	relativeday = c.getdays();
}