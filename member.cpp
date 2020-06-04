//
// Created by Swung 0x48 on 2020/6/2.
//

#include "member.h"

member::member(int type, string name, string address, int id):
    buyer(name, address, id),
    _type(type),
    _discountRate((type == 1) ? 0.85 : 1.0),
    _id(id)
    {}