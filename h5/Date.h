#pragma once
#include <ostream>
using namespace std;
class Date
{
private:
	int day; //1-30
	int month; // 1-12
	int year; // 0+
public:
	//constructor
	Date(int nDay = 1, int nMonth = 1, int nYear = 2024);

	//get
	const int getDay(); //this
	const int getMonth();
	const int getYear();

	//set
	void setDay(int newDay);
	void setMonth(int newMonth);
	void setYear(int newYear);

	//validate
	bool validate(int number, int type); //type is day/month/year ; 1 = day, 2 = month; 3 = year	//validate(25,1) = true;
	//validate(25,2) = false;
	//validate(25,3) = true;

	bool operator==(const Date& d) const;
	bool operator!=(const Date& d) const;
	bool operator<(const Date& d) const; // d is earlier
	bool operator>(const Date& d) const; // d is later

	friend ostream& operator<<(ostream& os, const Date& dt);
};

