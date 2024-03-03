#include "Cake.h"
#include <ostream>

Cake::Cake(Date e, int d, double h, double p, int s, bool g) {
	expiryDate = e;
	diam = d;
	height = h;
	price = p;
	storage = s;
	gluten = g;
}

Cake::Cake(const Cake& other)
{
	*this = other;
}

Cake& Cake::operator=(const Cake& other)
{
	if (this != &other) {
		expiryDate = other.expiryDate;
		diam = other.diam;
		height = other.height;
		price = other.price;
		storage = other.storage;
		gluten = other.gluten;
	}
	return *this;
}

bool Cake::operator==(Cake c)
{

	return  (c.expiryDate != this->expiryDate || c.diam != this->diam || c.height != this->height || c.price != this->price || c.storage != this->storage || c.gluten != this->gluten);
}

Cake& Cake::operator+=(int add)
{
	this->price += add;
}

ostream& operator<<(ostream& os, const Cake& c) {
	os << "Cake Details: " << endl;
	os << " Exp. Date: " << c.expiryDate << endl;
	os << " Diameter: " << c.diam << endl;
	os << " Height: " << c.height << endl;
	os << " Price: " << c.price << endl;
	switch (c.storage) {
	case 1:
		os << " Storage: Fridge" << endl;
		break;
	case 2:
		os << " Storage: Freezer" << endl;
		break;
	default:
		os << " Storage: Error" << endl;
		break;
	}
	os << " Gluten Free: " << c.gluten << endl;
	return os;
}
