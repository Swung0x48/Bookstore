//
// Created by Swung 0x48 on 2020/6/3.
//

#include "ViewModel.h"

string ViewModel::translate(bool HumanReadable, member &Member)
{
    if (HumanReadable)
    {
        return
                Util::to_string(Member.getType()) + " " +
                Util::to_string(Member.getDiscountRate()) + " " +
                Member.getName() + " " +
                Member.getAddress() + " " +
                Util::to_string(Member.getId()) + "\n";
    }
    else
    {
        return
                "ID: " + Util::to_string(Member.getId()) + "\n" +
                Util::to_string((Member.getType() == 1) ? "贵宾" : "顾客") + " " + Member.getName() + "\n" +
                "折扣率：" + Util::to_string(Member.getDiscountRate()) + "\n" +
                "住址：" + Member.getAddress() + "\n";
    }
}

string ViewModel::translate(bool HumanReadable, order &Order)
{
    member buyer = Order.getBuyer();
    auto orderList = Order.getOrderList();

    if (HumanReadable)
    {
          string ret =
            "订单号： " + Util::to_string(Order.getOrderId()) + "\n" +
            "购买者： " + buyer.getName() + "(" + Util::to_string(buyer.getId()) + ")\n" + "折扣： " + Util::to_string(buyer.getDiscountRate()) + "\n" +
            "\n";
          for (auto item: orderList)
          {
              const book& Book = item.first;
              const int& quantity = item.second;
              ret += Book.getName() + " x" + Util::to_string(quantity) + " " + Util::to_string(Book.getPrice()) + " " + Util::to_string(Book.getPrice() * quantity) + "\n";
          }
          ret += "共" + Util::to_string(Order.getBookCount()) + "本书\n小计： " + Util::to_string(Order.getSubtotal()) + "元";

          return ret;
    }
    else
    {

    }

}

string ViewModel::translate(bool HumanReadable, book &Book) {
    if (HumanReadable) {
        return
                "书名: " + Book.getName() + "\n" +
                "作者: " + Book.getAuthor() + "\n" +
                "出版社： " + Book.getPubHouse() + "\n" +
                "ISBN: " + Book.getIsbn() + "\n" +
                "价格： " + Util::to_string(Book.getPrice()) + "\n";
    } else {
        // TODO: Implement this.
        }
}
