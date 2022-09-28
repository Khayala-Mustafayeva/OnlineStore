#pragma once
#include<iostream>
#include<fstream>
#include<list>

using namespace std;

template <class T>
class FileDB
{
public:
	FileDB(string path) : filepath{path} {	}

	void Save(list<T>& data) {
		ofstream fout;
		fout.open(filepath, ios::trunc | ios::out);
		if (!fout.is_open()) throw "can't open the file!";
		for (auto i = data.begin(); i != data.end(); i++)
		{
			fout << (*i);
		}
	}


	void Load(list<T>& data) {
		ifstream fin;
		fin.open(filepath, ios::in);
		if (!fin.is_open()) throw "can't open the file!";
		while (!fin.eof())
		{
			T temp;
			fin >> temp;
			data.push_back(temp);
		}
	}



private:
	string filepath;
};

