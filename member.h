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
            string name,
            string address,
            int id = randGen::getRandom());

    int getType() const { return _type; }
    double getDiscountRate() const { return _discountRate; }
//    string getName() { return _name; }
    int getId() { return _id; }
//    string getAddress() { return _address; }

    bool operator< (const member& rhs) const  // overload operator< to make std::map happy.
    {
        return this->_id < rhs._id;
    }
};


#endif //BOOKSTORE_MEMBER_H
