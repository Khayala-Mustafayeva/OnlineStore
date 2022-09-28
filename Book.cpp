#include "Book.h"


void Book::show() {
	cout << "Code: " << getcode() << endl
		<< "Title: " << gettitle() << endl
		<< "Author: " << author<< endl
		<< "Genre: " << genre<< endl
		<< "Pages: " << pages << endl
		<< "Quantity: " << getquantity() << endl
		<< "Price: " << getprice() << endl
		<< "================================\n";
}

ofstream& operator<<(ofstream& fout, Book& cl) {
	fout << cl.getcode() << ' '
		<< cl.gettitle() << ' '
		<< cl.getquantity() << ' '
		<< cl.getisAvailable() << ' '
		<< cl.getprice() << ' '
		<< cl.author<< ' '
		<< cl.genre<< ' '
		<< cl.pages<< '\n';

	return fout;
}

ifstream& operator>>(ifstream& fin, Book& cl) {
	int code;
	string title;
	int quantity;
	bool isAvailable;
	float price;

	fin >> code >> title >> quantity >> isAvailable >> price >> cl.author>> cl.genre>> cl.pages;


	cl.setcode(code);
	cl.settitle(title);
	cl.setquantity(quantity);
	cl.setisAvailable(isAvailable);
	cl.setprice(price);


	return fin;
}