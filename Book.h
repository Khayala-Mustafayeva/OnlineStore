#pragma once
#include "Commodity.h"
#include <fstream>

class Book : public Commodity
{
public:
	Book(int c, string t, int count, bool availabe, float pr, string cat, string s, int col) :
		Commodity{ c, t, count, availabe, pr }, author{ cat }, genre{ s }, pages{ col }
	{

	}

	Book() :
		Book{ rand() % 100 + 123, "unknown", 0, false, 0.0f, "unknown" , "unknown" , 3 }
	{

	}

	string getauthor() { return author; }
	string getgenre() { return 	genre; }
	int getpages() { return pages; }

	void setauthor(string author) {
		this->author = author;
	}
	void setgenre(string genre) { this->genre = genre; }
	void setpages(int pages) { this->pages = pages; }


	virtual void show();

	friend ofstream& operator<<(ofstream& fout, Book& cl);
	friend ifstream& operator>>(ifstream& fin, Book& cl);


private:
	string author;
	string genre;
	int pages;
};

