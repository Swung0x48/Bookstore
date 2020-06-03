//
// Created by Swung 0x48 on 2020/6/3.
//

#ifndef BOOKSTORE_VIEWMODEL_H
#define BOOKSTORE_VIEWMODEL_H
#include <string>
#include "member.h"
#include "order.h"
using namespace std;

class ViewModel
{
public:
    static string translate(bool HumanReadable, member& Member);
    static string translate(bool HumanReadable, order& Order);
    static string translate(bool HumanReadable, book& Book);
};


#endif //BOOKSTORE_VIEWMODEL_H
