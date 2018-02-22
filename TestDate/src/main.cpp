#include <iostream>
#include "date/Date.h"
#include "date/Time.h"
#include "date/DateTime.h"
#include <string>

void testDate() {
	Date date1(1,2,3);
	std::cout << date1 << std::endl;
	Date date2;
	std::cout << date2 << std::endl;
	Date date3(1723,2234,3123443);
	std::cout << date3 << std::endl;
	date3.setDay(61);
	date3.setMonth(25);
	std::cout << date3 << std::endl;
}

void testTime() {
	Time time1;
	std::cout << time1 << std::endl;
	Time time2(4,34,12);
	std::cout << time2 << std::endl;
	Time time3(4,34);
	std::cout << time3 << std::endl;
	Time time4(4);
	std::cout << time4 << std::endl;
	Time time5(40);
	std::cout << time5 << std::endl;
	Time time6(0, 0, 3600);
	std::cout << time6 << std::endl;
	time6.setSecond(7200);
	time6.setMinute(125);
	std::cout << time6 << std::endl;
}

void testTimeOperators() {
	Time time1(1,2,3);
	Time time2(1,2,3);
	Time time3(1,2,5);
	std::cout << time1 << " y " << time2;
	if(time1 == time2) { // 01:02:03 == 01:02:03
		std::cout << " son iguales" << std::endl;
	} else {
		std::cout << " son distintos" << std::endl;
	}
	std::cout << time1 << " y " << time3;
	if(time1 == time3) { // 01:02:03 != 01:02:05
		std::cout << " son iguales" << std::endl;
	} else {
		std::cout << " son distintos" << std::endl;
	}
	std::cout << time1 << " + " << time3 << " = ";
	std::cout << time1 + time3 << std::endl;
	Time time4(23, 59, 58);
	std::cout << time4 << " + " << time3 << " = ";
	std::cout << time4 + time3 << std::endl;
}

void testDateOperators() {
	Date date1(1,2,3);
	Date date2(1,2,3);
	Date date3(1,2,5);
	std::cout << date1 << " y " << date2;
	if(date1 == date2) {
		std::cout << " son iguales" << std::endl;
	} else {
		std::cout << " son distintos" << std::endl;
	}
	std::cout << date1 << " y " << date3;
	if(date1 == date3) {
		std::cout << " son iguales" << std::endl;
	} else {
		std::cout << " son distintos" << std::endl;
	}
	std::cout << date1 << " + " << date3 << " = ";
	std::cout << date1 + date3 << std::endl;
	Date date4(31, 12, 2343);
	std::cout << date4 << " + " << date3 << " = ";
	std::cout << date4 + date3 << std::endl;
}

void testDateTime() {
	DateTime dt1;
	Date date1(52,374,12374);
	Time time1(1,235,34);
	DateTime dt2(date1, time1);
	std::cout << dt1 << std::endl;
	std::cout << dt2 << std::endl;
	std::cout << dt1 + dt2 << std::endl;
	std::cout << dt1 << " y " << dt1;
	if(dt1 == dt1) {
		std::cout << " son iguales" << std::endl;
	} else {
		std::cout << " son distintos" << std::endl;
	}
	std::cout << dt1 << " y " << dt2;
	if(dt1 == dt2) {
		std::cout << " son iguales" << std::endl;
	} else {
		std::cout << " son distintos" << std::endl;
	}
}

int main() {
	//testDate();
	//testTime();
	//testTimeOperators();
	//testDateOperators();
	testDateTime();
}
