/*
 * Time.cpp
 *
 *  Created on: 20/02/2018
 *      Author: usuario
 */

#include "Time.h"

unsigned short Time::getHour() const {
	return hour;
}

// Hacer que la hora esté entre 0 - 23
void Time::setHour(unsigned short hour) {
	this->hour = hour % 24;
}

unsigned short Time::getMinute() const {
	return minute;
}

// Si el minuto es 60, poner minuto 0 y sumar 1 a la hora
void Time::setMinute(unsigned short minute) {
	this->minute = minute % 60;
	setHour(getHour() + minute / 60);
}

unsigned short Time::getSecond() const {
	return second;
}

void Time::setSecond(unsigned short second) {
	this->second = second % 60;
	setMinute(getMinute() + second / 60);
}

Time::Time(unsigned short hour, unsigned short minute, unsigned short second) {
	this->hour = 0;
	this->minute = 0;
	this->second = 0;
	setSecond(second);
	setMinute(minute + getMinute());
	setHour(hour + getHour());
}

Time::Time(unsigned short hour, unsigned short minute) {
	this->hour = 0;
	this->minute = 0;
	this->second = 0;
	setMinute(minute);
	setHour(hour + getHour());
}

Time::Time(unsigned short hour) {
	this->hour = 0;
	this->minute = 0;
	this->second = 0;
	setHour(hour);
}


