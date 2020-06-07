//
// Created by Swung 0x48 on 2020/6/3.
//

#include "Presenter.h"
#include "Vars.h"
#include <iostream>
using namespace std;


string Presenter::translate(bool HumanReadable, member &Member)
{
    if (!HumanReadable)
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

string Presenter::translate(bool HumanReadable, order& Order)
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
          ret += "\n共" + Util::to_string(Order.getBookCount()) + "本书\n小计： " + Util::to_string(Order.getSubtotal() * buyer.getDiscountRate()) + "元";

          return ret;
    }
    else
    {

    }

}

string Presenter::translate(bool HumanReadable, book &Book) {
    if (HumanReadable) {
        return
                "书名: " + Book.getName() + "\n" +
                "作者: " + Book.getAuthor() + "\n" +
                "出版社： " + Book.getPubHouse() + "\n" +
                "ISBN: " + Book.getIsbn() + "\n" +
                "价格： " + Util::to_string(Book.getPrice()) + "\n\n";
    }
    else
    {
        return
                Book.getName() + " " +
                Book.getAuthor() + " " +
                Book.getPubHouse() + " " +
                Book.getIsbn() + " " +
                Util::to_string(Book.getPrice());
    }
}


void Presenter::Login()
{
    int ret;
    cout << "欢迎来到书店！" << endl;
    cout << "请输入你的账号： " << endl;
    cin >> ret;
    for (auto member: Vars::memberList)
    {
        if (member.getId() == ret)
        {
            cout << "欢迎，" << member.getName() << endl;
            Vars::CurrentUser = member;
            return;
        }
    }

    cout << "输入的账号不存在。请注册一个新账号。" << endl;
    cout << "输入你的姓名:" << endl;
    string name;
    cin >> name;
    cout << "输入账号类型(0, 普通用户/1, 会员)" << endl;
    int type;
    cin >> type;
    cout << "请输入地址：" << endl;
    string address;
    cin >> address;
    member newMember(type, name, address);
    Vars::memberList.insert(newMember);
    Vars::CurrentUser = newMember;
}

int Presenter::MainMenu()
{
    cout << "接下来要做什么？" << endl;
    cout << endl;
    cout << "1. 显示购物车" << endl;
    cout << "2. 显示当前用户信息" << endl;
    cout << "3. 浏览图书" << endl;
    cout << "4. 立即下单" << endl;
    int ret;
    cin >> ret;
    return ret;
}

