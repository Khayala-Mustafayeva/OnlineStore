#pragma once
#include "Commodity.h"
#include <fstream>


class Clothes : public Commodity
{
public:
	Clothes(int c, string t, int count, bool availabe, float pr, string cat, string s, string col):
		Commodity{c, t, count, availabe, pr}, category{cat}, size{s}, color{col}
	{

	}

	Clothes() :
		Clothes{rand()%100+123, "unknown", 0, false, 0.0f, "unknown" , "unknown" , "unknown" }
	{

	}

	string getcategory(){return category;}
	string getsize(){return 	size;}
	string getcolor() { return 	color; }

	void setcategory(string category) { this->category = category;
	}
	void setsize(string size) { this->size = size; }
	void setcolor(string color) { this->color = color; }


	virtual void show();

	friend ofstream& operator<<(ofstream& fout, Clothes& cl);
	friend ifstream& operator>>(ifstream& fin, Clothes& cl);


private:
	string category;
	string size;
	string color;
};

