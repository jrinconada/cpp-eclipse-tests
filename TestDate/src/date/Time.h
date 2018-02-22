/*
 * Time.h
 *
 *  Created on: 20/02/2018
 *      Author: usuario
 */
#include <iostream>
#include <iomanip>
using namespace std;
#ifndef TIME_H_
#define TIME_H_

class Time {
	unsigned short hour;
	unsigned short minute;
	unsigned short second;
public:
	Time() : hour(0), minute(0), second(0) {}
	Time(unsigned short hour, unsigned short minute, unsigned short second);
	Time(unsigned short hour, unsigned short minute);
	Time(unsigned short hour);

	unsigned short getHour() const;
	void setHour(unsigned short hour);
	unsigned short getMinute() const;
	void setMinute(unsigned short minute);
	unsigned short getSecond() const;
	void setSecond(unsigned short second);

	bool operator==(const Time& t) {
		return hour == t.getHour()
				&& minute == t.getMinute()
				&& second == t.getSecond();
	}
	friend ostream& operator<<(ostream &os, const Time& t) {
		os << setw(2) << setfill('0') << t.hour
			<< ":" << setw(2) << setfill('0') << t.minute
			<< ":" << setw(2) << setfill('0') << t.second;
		return os;
	}
	Time operator+(const Time& t) {
		return Time(hour + t.hour, minute + t.minute, second + t.second);
	}
};

#endif /* TIME_H_ */
