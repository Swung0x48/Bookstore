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

    string getName() { return _name; }
    string getAuthor() { return _author; }
    string getPubHouse() { return _pubHouse; }
    string getIsbn() { return _isbn; }
    double getPrice() const { return _price; }

    bool operator< (const book& rhs) const  // overload operator< to make std::map happy.
    {
        return this->_name < rhs._name;
    }

    string toString(int para)   // 0 to stdout, 1 to file
    {
        if (para == 1)
        {
            return _name + " " + _author + " " + _pubHouse + " " + _isbn + " " + Util::to_string(_price) + " " + "\n";
        }
        else if (para == 0)
        {
            return
                "书名: " + _name + "\n" +
                "作者: " + _author + "\n" +
                "出版社： " + _pubHouse + "\n" +
                "ISBN: " + _isbn + "\n" +
                "价格： " + Util::to_string(_price) + "\n";
        }
    }
};


#endif //BOOKSTORE_BOOK_H
