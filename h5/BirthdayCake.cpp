#include "BirthdayCake.h"

BirthdayCake::BirthdayCake(Date e, int d, double h, double p, int s, bool g, char* taste) :Cake(e, d, h, p, s, g)
{
	text = taste;
}

BirthdayCake::BirthdayCake(BirthdayCake& other) :Cake((Cake&)other)
{
	*this = other;
}

BirthdayCake::~BirthdayCake()
{
	delete text;
}

Date BirthdayCake::getDate()
{
	return this->expiryDate;
}

int BirthdayCake::getDiam()
{
	return this->diam;
}

double BirthdayCake::getHeight()
{
	return this->height;
}

double BirthdayCake::getPrice()
{
	return this->height;
}

int BirthdayCake::getStorage()
{
	return this->storage;
}

bool BirthdayCake::getGluten()
{
	return this->gluten;
}

char* BirthdayCake::getText()
{
	return this->text;
}

void BirthdayCake::setDate(Date d)
{
	this->expiryDate = d;
}

void BirthdayCake::setDiam(int d)
{
	this->diam = d;
}

void BirthdayCake::setHeight(double d)
{
	this->height = d;
}

void BirthdayCake::setPrice(double d)
{
	this->price = d;
}

void BirthdayCake::setStorage(int d)
{
	this->storage = d;
}

void BirthdayCake::setGluten(bool d)
{
	this->gluten = d;
}

void BirthdayCake::setText(char* d)
{
	this->text = d;
}

BirthdayCake& BirthdayCake::operator=(BirthdayCake& other)
{
	if (this != &other) {
		(Cake&)*this = (Cake&)other;
		text = other.text;
	}
	return *this;
}

bool BirthdayCake::operator==(BirthdayCake c)
{

	return ((Cake) c == (Cake)*this && c.text == this->text);
}

BirthdayCake& BirthdayCake::operator+=(int priceAdd)
{
	this->price += priceAdd;
}

ostream& operator<<(ostream& out, const BirthdayCake& cake)
{
	out << (Cake&)cake << "text: " << cake.text << endl;
	return out;
}
