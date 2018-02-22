/*
 * Date.h
 *
 *  Created on: 19/02/2018
 *      Author: Profe Juan
 */

#include <iostream>
#include <iomanip>
using namespace std;
#ifndef DATE_H_
#define DATE_H_

class Date {
	unsigned short day;
	unsigned short month;
	long year;
public:
	Date();
	Date(unsigned short day, unsigned short month, long year);

	unsigned short getDay() const;
	bool setDay(unsigned short day);
	unsigned short getMonth() const;
	bool setMonth(unsigned short month);
	long getYear() const;
	void setYear(long year);

	bool operator==(const Date& d) {
		return day == d.day
				&& month == d.month
				&& year == d.year;
	}
	friend ostream& operator<<(ostream &os, const Date& d) {
		os << setw(2) << setfill('0') << d.day << "/"
			<< setw(2) << setfill('0') << d.month << "/"
			<< setw(4) << setfill('0') << d.year;
		return os;
	}
	Date operator+(const Date& d) {
		return Date(day + d.day, month + d.month, year + d.year);
	}
};

#endif /* DATE_H_ */
