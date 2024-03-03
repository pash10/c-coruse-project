#include "Date.h"
#include <ostream>
using namespace std;

Date::Date(int nDay, int nMonth, int nYear) {
	setDay(nDay);
	setMonth(nMonth);
	setYear(nYear);
}

//get
const int Date::getDay() {
	return this->day;
}

const int Date::getMonth() {
	return this->month;
}

const int Date::getYear() {
	return this->year;
}

//set
void Date::setDay(int newDay)throw (char*) { //must validate
	if (newDay <= 30 && newDay >= 1) {
		this->day = newDay;
	}
	else {
		throw "Day not in range (1-30).";
	}
}

void Date::setMonth(int newMonth) throw(char*) {
	if (newMonth <= 12 && newMonth >= 1) {
		this->month = newMonth;
	}
	else {
		throw "Month not in range (1-12).";
	}
}

void Date::setYear(int newYear) {
	if (newYear > 0) {
		this->year = newYear;
	}
	else {
		this->year = 2024;
	}
}
//validate

//bool Date::validate(int number, int type) {
//	switch (type) {
//	case 1: //day
//		return number <= 30 && number >= 1;
//	case 2: //month
//		return number <= 12 && number >= 1;
//	case 3:
//		return number > 0;
//	default:
//		return false;
//	}
//}

//operators

bool Date::operator==(const Date& d) const {
	if (day != d.day) return false;
	if (month != d.month) return false;
	if (year != d.year) return false;

	return true;
}

bool Date::operator!=(const Date& d) const
{
	if (day != d.day) return true;
	if (month != d.month) return true;
	if (year != d.year) return true;

	return false;
}

bool Date::operator<(const Date& d) const //d is earlier
{
	if (d.year < year) return true;
	else if (d.month < month) return true;
	else if (d.day < day) return true;
	else return false;
}

bool Date::operator>(const Date& d) const //d is later
{
	if (d.year > year) return true;
	else if (d.month > month) return true;
	else if (d.day > day) return true;
	else return false;
}

ostream& operator<<(ostream& os, const Date& dt)
{
	// TODO: insert return statement here
	os << dt.month << "/" << dt.day << "/" << dt.year << endl;
	return os;
}
