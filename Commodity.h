#pragma once
#include <iostream>
#include <string>


using namespace std;


class Commodity
{
public:
	Commodity(int c, string t, int count, bool availabe, float pr):
		code{ c }, title{ t }, quantity{ count > 0 ? count : 0 }, isAvailable{ availabe }, price{ pr }{}

	Commodity(int c) : Commodity{ c, "unknown", 0, false, 0.0f } {}
	Commodity() : Commodity{ rand()%100 + 123, "unknown", 0, false, 0.0f} {}

	int getcode() { return code;}
	string gettitle() { return title; }
	int getquantity() { return quantity; }
	bool getisAvailable() { return isAvailable; }
	float getprice() { return price;}



	void settitle(string title) { this->title = title; }
	void setquantity(int quantity) { this->quantity = quantity; }
	void decreaseQuantity(int count=1) { 
		if (count > quantity) throw "not enough goods.";
		this->quantity = quantity; }
	void setisAvailable(bool isAvailable) { this->isAvailable = isAvailable; }
	void setprice(float price) { this->price = price; }

	virtual void show() {}



	void setcode(int code) { this->code = code; }
protected:

private:
	int code;
	string title;
	int quantity;
	bool isAvailable;
	float price;
};

