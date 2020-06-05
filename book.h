//
// Created by Swung 0x48 on 2020/6/2.
//

#ifndef BOOKSTORE_BOOK_H
#define BOOKSTORE_BOOK_H
#include <string>
#include "Util.h"

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
            const string& name,
            const string& author,
            const string& pubHouse,
            const string& Isbn,
            const double& price
         ):
            _name(name),
            _author(author),
            _pubHouse(pubHouse),
            _isbn(Isbn),
            _price(price) {}

    string getName() const { return _name; }
    string getAuthor() const { return _author; }
    string getPubHouse() const { return _pubHouse; }
    string getIsbn() const { return _isbn; }
    double getPrice() const { return _price; }

    bool operator< (const book& rhs) const  // overload operator< to make std::map happy.
    {
        return this->_name < rhs._name;
    }

};


#endif //BOOKSTORE_BOOK_H
