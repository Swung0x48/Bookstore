//
// Created by Swung 0x48 on 2020/6/2.
//

#ifndef BOOKSTORE_BOOK_H
#define BOOKSTORE_BOOK_H
#include <string>
using namespace std;

class book
{
private:
    string _name;
    string _author;
    string _pubHouse;
    string _isbn;
    double _price;
public:
    book(
            string name,
            string author,
            string pubHouse,
            string Isbn,
            double price
         ):
            _name(name),
            _author(author),
            _pubHouse(pubHouse),
            _isbn(Isbn),
            _price(price) {}

    string getName() { return _name; }
    string getAuthor() { return _author; }
    string getPubHouse() { return _pubHouse; }
    string getIsbn() { return _isbn; }
    double getPrice() { return _price; }


};


#endif //BOOKSTORE_BOOK_H
