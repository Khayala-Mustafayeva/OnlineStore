#include "Clothes.h"


void Clothes::show() {
	cout << "Code: " << getcode() << endl
		<< "Title: " << gettitle() << endl
		<< "Category: " << category << endl
		<< "Size: " << size << endl
		<< "Color: " << color << endl
		<< "Quantity: " << getquantity() << endl
		<< "Price: " << getprice() << endl
		<< "================================\n";
}

ofstream& operator<<(ofstream& fout, Clothes& cl){
	fout <<cl.getcode() << ' '
		<< cl.gettitle() << ' '
		<< cl.getquantity() << ' '
		<< cl.getisAvailable() << ' '
		<< cl.getprice() << ' '
		<< cl.getcategory() << ' '
		<< cl.getsize() << ' '
		<< cl.getcolor() << '\n';

	return fout;
}
ifstream& operator>>(ifstream& fin, Clothes& cl){
	int code;
	string title;
	int quantity;
	bool isAvailable;
	float price;

	fin >> code >> title >> quantity >> isAvailable >> price >> cl.category  >> cl.size >> cl.color;
	//string& unwantedSymbol = cl.color.back();
	//if (cl.color[cl.color.length() - 1] == '|') cl.color.erase(cl.color.length() - 1);

	cl.setcode(code);
	cl.settitle(title);
	cl.setquantity(quantity);
	cl.setisAvailable(isAvailable);
	cl.setprice(price);
		

	return fin;
}