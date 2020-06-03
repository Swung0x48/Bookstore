//
// Created by Swung 0x48 on 2020/6/2.
//

#ifndef BOOKSTORE_ORDER_H
#define BOOKSTORE_ORDER_H
#include <vector>
#include "book.h"
#include "member.h"
#include "randGen.h"

class order
{
private:
    int _orderId;
    member& _buyer;
    map<book, int> _orderList;  // book, count: int
public:
    order(member& buyer, int orderId = randGen::getRandom()) : _buyer(buyer), _orderId(orderId) {}
    int getOrderId() { return _orderId; }
    member& getBuyer() { return _buyer; }
    map<book, int>& getOrderList() { return _orderList; }
    double getSubtotal();
    int getBookCount();
    void addItem(const book& newBook, const int& amount = 1);
};


#endif //BOOKSTORE_ORDER_H
