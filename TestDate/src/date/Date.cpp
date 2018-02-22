/*
 * Date.cpp
 *
 *  Created on: 19/02/2018
 *      Author: yo
 */

#include "Date.h"

unsigned short Date::getDay() const {
	return day;
}

bool Date::setDay(unsigned short day) {
	if (day >= 1 && day <= 31) {
		this->day = day;
		return true;
	} else {
		this->day = (day - 1) % 31 + 1;
		return false;
	}
}

unsigned short Date::getMonth() const {
	return month;
}

bool Date::setMonth(unsigned short month) {
	if (month >= 1 && month <= 12) {
		this->month = month;
		return true;
	} else {
		this->month = (month - 1) % 12 + 1;
		return false;
	}
}

long Date::getYear() const {
	return year;
}

void Date::setYear(long year) {
	this->year = year;
}

Date::Date() {
	day = 1;
	month = 1;
	year = 1;
}

Date::Date(unsigned short day, unsigned short month, long year) {
	setDay(day);
	setMonth(month);
	setYear(year);
}



