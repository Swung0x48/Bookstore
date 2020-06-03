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

    string toString(int para)   // 0 to stdout, 1 to file
    {
        if (para == 1)
        {
            return
                Util::to_string(_type) + " " +
                Util::to_string(_discountRate) + " " +
                _name + " " +
                _address + " " +
                Util::to_string(_id) + "\n";
        }
        else if (para == 0)
        {
            return
                    "ID: " + Util::to_string(_id) + "\n" +
                    Util::to_string((_type == 1) ? "贵宾" : "顾客") + " " + _name + "\n" +
                    "折扣率：" + Util::to_string(_discountRate) + "\n" +
                    "住址：" + _address + "\n";
        }
        return std::string();
    }

};


#endif //BOOKSTORE_MEMBER_H
