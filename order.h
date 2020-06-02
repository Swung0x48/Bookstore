//
// Created by Swung 0x48 on 2020/6/2.
//

#ifndef BOOKSTORE_ORDER_H
#define BOOKSTORE_ORDER_H
#include <vector>
#include "book.h"
#include "member.h"

class order
{
private:
    int _orderId;
    member& _buyer;
    vector<book> _orderList;
public:

    int getOrderId() { return _orderId; }

};


#endif //BOOKSTORE_ORDER_H
