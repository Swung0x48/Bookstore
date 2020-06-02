//
// Created by Swung 0x48 on 2020/6/2.
//

#ifndef BOOKSTORE_VARS_H
#define BOOKSTORE_VARS_H

#include <vector>
#include "member.h"
#include "order.h"

class Vars
{
    static vector<member> MemberList;
    static vector<book> AvailableBookList;
    static vector<order> OrderList;
};


#endif //BOOKSTORE_VARS_H
