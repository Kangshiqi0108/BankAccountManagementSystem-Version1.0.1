#ifndef ACCUMULTOR_H
#define ACCUMULATOR_H
#include"date.h"
class Accumulator {
private:
	Date originaldate;
	Date lastdate;
public:
	Accumulator() {}
	Accumulator(const Date& originaldate) :originaldate(originaldate), lastdate(originaldate) {
		relativeday = 0;
	}
	Accumulator(const Date& originaldate, const Date& lastdate) :originaldate(originaldate), lastdate(lastdate), relativeday(0) {}
	virtual ~Accumulator() {}
	void record(const Date& date);
	int relativeday;
	//~Accumulator(){}

};
#endif // !ACCUMULTOR_H

