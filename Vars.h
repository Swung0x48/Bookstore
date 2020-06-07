//
// Created by Swung 0x48 on 2020/6/3.
//

#ifndef BOOKSTORE_VARS_H
#define BOOKSTORE_VARS_H
#include <vector>
#include <set>
#include "order.h"
#include "member.h"

class Vars
{
public:
    static vector<order> orderList;
    static set<member> memberList;
    static set<book> bookList;
    static vector<book> bookListVector;
    static member CurrentUser;
};


#endif //BOOKSTORE_VARS_H
