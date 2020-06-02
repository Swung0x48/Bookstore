//
// Created by Swung 0x48 on 2020/6/2.
//

#ifndef BOOKSTORE_MEMBER_H
#define BOOKSTORE_MEMBER_H

#include "buyer.h"

class member: public buyer
{
    int _type;
public:
    member(int type = 0, string name = "", int Id = 0, string address = "", double subtotal = 0.0)
        : buyer(name, Id, address, subtotal), _type(type) { }

};


#endif //BOOKSTORE_MEMBER_H
