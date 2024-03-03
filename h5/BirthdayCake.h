#pragma once
#include <ostream>
#include "Cake.h"
class BirthdayCake:Cake
{
protected:
	char* text;
public:

	BirthdayCake(Date e, int d, double h, double p, int s, bool g, char* text);
	BirthdayCake(BirthdayCake& other);
	~BirthdayCake();

	//gets
	Date getDate();
	int getDiam();
	double getHeight();
	double getPrice();
	int getStorage();
	bool getGluten();
	char* getText();

	//sets
	void setDate(Date d);
	void setDiam(int d);
	void setHeight(double d);
	void setPrice(double d);
	void setStorage(int d);
	void setGluten(bool d);
	void setText(char* d);

	BirthdayCake& operator=(BirthdayCake& other);
	bool operator==(BirthdayCake other);
	BirthdayCake& operator+=(int priceAdd);
	friend ostream& operator<<(ostream& out, const BirthdayCake& cake);
};

