/*
 * DateTime.h
 *
 *  Created on: 20/02/2018
 *      Author: usuario
 */
#include "Date.h"
#include "Time.h"

#ifndef DATE_DATETIME_H_
#define DATE_DATETIME_H_

class DateTime {
public:
	Date date;
	Time time;
	DateTime();
	DateTime(Date date, Time time) : date(date), time(time) {}

	bool operator==(const DateTime& dt) {
		return time == dt.time && date == dt.date;
	}
	friend ostream& operator<<(ostream &os, const DateTime& dt) {
		os << dt.date << " " << dt.time;
		return os;
	}
	DateTime operator+(const DateTime& dt) {
		return DateTime(date + dt.date, time + dt.time);
	}
};

#endif /* DATE_DATETIME_H_ */
