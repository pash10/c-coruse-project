#pragma once
#include "Date.h"
class Cake
{
	//date, int diam, double height, double price, int storage(fridge/freezer), bool glutenfree
protected:
	Date expiryDate;
	int diam; //diameter
	double height;
	double price;
	int storage;
	bool gluten; //gluten free or not

public:
	Cake(Date e, int d, double h, double p, int s, bool g);
	Cake(const Cake& other);

	Cake& operator=(const Cake& other);
	bool operator==(Cake c);
	Cake& operator+=(int add);
	friend ostream& operator<<(ostream& os, const Cake& c);
};

