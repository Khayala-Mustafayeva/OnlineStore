#include <iostream>
#include "FileDB.h"
#include "Clothes.h"
#include "Book.h"


using namespace std;


int main()
{
    Clothes c1{ 1, "narutoTshirt", 2, true, 2.5f, "tshirt", "XS", "orange" };
    Clothes c2{ 1, "kakashiTshirt", 2, true, 5.5f, "tshirt", "XS", "gray" };
    //Book b1{ 2, "IT", 3, true, 20.45f, "horror", "chto-nibud", 780 };

    list<Clothes> cls;
    cls.push_back(c1);
    cls.push_back(c2);
    list<Book> bbs;
    //bbs.push_back(b1);

    FileDB<Clothes> Cfdb{"clothes.txt"};
    FileDB<Book> Bfdb{"books.txt"};
    


    Cfdb.Save(cls);
    //Cfdb.Load(cls);

    //for (auto i = cls.begin(); i != cls.end(); i++)
    //{
    //    (*i).show();
    //}
}


