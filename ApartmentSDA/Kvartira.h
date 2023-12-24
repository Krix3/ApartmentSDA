#pragma once
#include<iostream>
#include<windows.h>

using namespace std;

class Kvartira
{
	double size;
	int price;

public:

	Kvartira(double size, int price) :
		size{ size },
		price{ price }
	{}
	Kvartira() :Kvartira(0, 0) {}
	Kvartira(const Kvartira& obj) :
		size{ obj.size },
		price{ obj.price }
	{}

	double getSize() const
	{
		return size;
	}
	int getPrice() const
	{
		return price;
	}

	Kvartira& setSize(double size)
	{
		this->size = size;
		return *this;
	}
	Kvartira& setPrice(int price)
	{
		this->price = price;
		return *this;
	}


	void show()
	{
		cout << "Цена(руб) = " << price << " " << "Размер(м) = " << size << endl;
	}

	friend bool operator==(const Kvartira& a, const Kvartira& b);

	Kvartira& operator=(const Kvartira& a);

	friend bool operator>(const Kvartira& a, const Kvartira& b);

};

