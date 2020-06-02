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
    double _price;
public:
    book(string name, string author, string pubHouse, double price):
        _name(name), _author(author), _pubHouse(pubHouse), _price(price) {}
    string getName() { return _name; }
    string getAuthor() { return _author; }
    string getPubHouse() { return _pubHouse; }
    double getPrice() { return _price; }
};


#endif //BOOKSTORE_BOOK_H
