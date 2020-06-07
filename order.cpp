//
// Created by Swung 0x48 on 2020/6/2.
//

#include "order.h"

double order::getSubtotal() {
    double ret = 0;
    for (auto item: _orderList)
    {
        ret += item.first.getPrice() * (double)item.second;
    }
    return ret;
}

void order::addItem(const book &newBook, const int &amount)
{
//    if(!_orderList[newBook])
//    {
//        _orderList.insert(make_pair(newBook, amount));
//    }
//    else
//    {
    _orderList[newBook] += amount;
}

int order::getBookCount() {
    int ret = 0;
    for (auto item: _orderList)
    {
        ret += item.second;
    }
    return ret;
}
