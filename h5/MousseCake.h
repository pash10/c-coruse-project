#pragma once
#include "Cake.h"
#include <ostream>
class MousseCake:public Cake
{
protected:
	char* flavor;
public:
	MousseCake(Date e, int d, double h, double p, int s, bool g, char* flavor);
	MousseCake(MousseCake& other);
	~MousseCake();

	//gets
	Date getDate();
	int getDiam();
	double getHeight();
	double getPrice();
	int getStorage();
	bool getGluten();
	char* getFlavor();

	//sets
	void setDate(Date d);
	void setDiam(int d);
	void setHeight(double d);
	void setPrice(double d);
	void setStorage(int d);
	void setGluten(bool d);
	void setFlavor(char* d);

	MousseCake& operator=(MousseCake& other);
	bool operator==(MousseCake other);
	MousseCake& operator+=(int priceAdd);
	friend ostream& operator<<(ostream& out, const MousseCake& cake);
};

