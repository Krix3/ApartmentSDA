#include "Kvartira.h"
#include<iostream>

bool operator==(const Kvartira& a, const Kvartira& b)
{
	return a.size == b.size;
}

bool operator>(const Kvartira& a, const Kvartira& b)
{
	return a.price > b.price;
}

Kvartira& Kvartira::operator=(const Kvartira& a)
{
	if (this == &a)
	{
		return *this;
	}

	this->size = a.size;
	this->price = a.price;
	return *this;
}
