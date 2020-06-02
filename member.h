//
// Created by Swung 0x48 on 2020/6/2.
//

#ifndef BOOKSTORE_MEMBER_H
#define BOOKSTORE_MEMBER_H

#include <map>
#include "buyer.h"
#include "book.h"

class member: public buyer
{
    int _type;              // member type, 0 for ordinary member, 1 for honored_guests
    double _discountRate;   // ranging from 0 to 1.
    map<book, int> _bookList;
public:
    member(
            int type,
            double discountRate,
            string name,
            int Id,
            string address,
            double subtotal
           ):
            buyer(name, Id, address, subtotal),
            _type(type),
            _discountRate(discountRate) {}
    virtual map<book, int> getBookList() { return _bookList; }
    virtual void addBook(book newBook);
    virtual void updateSubtotal();

};


#endif //BOOKSTORE_MEMBER_H
