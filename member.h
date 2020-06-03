//
// Created by Swung 0x48 on 2020/6/2.
//

#ifndef BOOKSTORE_MEMBER_H
#define BOOKSTORE_MEMBER_H

#include <map>
#include <sstream>
#include "buyer.h"
#include "book.h"
#include "randGen.h"

class member: public buyer
{
    int _id;
    int _type;              // member type, 0 for ordinary member, 1 for honored_guests
    double _discountRate;   // ranging from 0 to 1.
public:
    member(
            int type,
            double discountRate,
            string name,
            string address,
            int id = randGen::getRandom()) :

            buyer(name, address, id),
            _type(type),
            _discountRate(discountRate),
            _id(id)
            {}

    int getType() const { return _type; }
    double getDiscountRate() const { return _discountRate; }
//    string getName() { return _name; }
    int getId() { return _id; }
//    string getAddress() { return _address; }

};


#endif //BOOKSTORE_MEMBER_H
