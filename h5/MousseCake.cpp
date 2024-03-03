#include "MousseCake.h"

MousseCake::MousseCake(Date e, int d, double h, double p, int s, bool g, char* taste):Cake(e,d,h,p,s,g)
{
	flavor = taste;
}

MousseCake::MousseCake(MousseCake& other):Cake((Cake&)other)
{
	*this = other;
}

MousseCake::~MousseCake()
{
	delete flavor;
}

Date MousseCake::getDate()
{
	return this->expiryDate;
}

int MousseCake::getDiam()
{
	return this->diam;
}

double MousseCake::getHeight()
{
	return this->height;
}

double MousseCake::getPrice()
{
	return this->height;
}

int MousseCake::getStorage()
{
	return this->storage;
}

bool MousseCake::getGluten()
{
	return this->gluten;
}

char* MousseCake::getFlavor()
{
	return this->flavor;
}

void MousseCake::setDate(Date d)
{
	this->expiryDate = d;
}

void MousseCake::setDiam(int d)
{
	this->diam = d;
}

void MousseCake::setHeight(double d)
{
	this->height = d;
}

void MousseCake::setPrice(double d)
{
	this->price = d;
}

void MousseCake::setStorage(int d)
{
	this->storage = d;
}

void MousseCake::setGluten(bool d)
{
	this->gluten = d;
}

void MousseCake::setFlavor(char* d)
{
	this->flavor = d;
}

MousseCake& MousseCake::operator=(MousseCake& other)
{
	if (this != &other) {
		(Cake&)*this = (Cake&)other;
		flavor = other.flavor;
	}
	return *this;
}

bool MousseCake::operator==(MousseCake c)
{

	return (strcmp(this->flavor, c.flavor) != 0 || c.diam != this->diam || c.height != this->height || c.price != this->price || c.storage != this->storage || c.gluten != this->gluten);
}

MousseCake& MousseCake::operator+=(int priceAdd)
{
	this->price += priceAdd;
}

ostream& operator<<(ostream& out, const MousseCake& cake)
{
	out << (Cake&)cake << "Flavor: " << cake.flavor << endl;
	return out;
}
