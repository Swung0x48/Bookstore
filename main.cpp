#include <iostream>
#include "member.h"
#include "order.h"
#include "ViewModel.h"
#include "Vars.h"
#include "File.h"
using namespace std;

int main()
{
//    book mem("name", "Fred", "a pubhouse", "a-vvv-ccc", 50);
//    book mem2(mem);
//    book mem3(mem);
//    book mem4("aaa", "Frd", "a puhouse", "a-vvv-ddc", 40);
//    Vars::bookList.insert(mem);
//    Vars::bookList.insert(mem2);
//    Vars::bookList.insert(mem3);
//    Vars::bookList.insert(mem4);
//
//    order o(me);
//    o.addItem(mem, 1);
//    o.addItem(mem3, 1);
//    o.addItem(mem4, 1);
//    Vars::orderList.push_back(o);
//
//    cout << o.getBuyer().getName() << endl;
//    cout << o.getSubtotal() << endl;
//    cout << ViewModel::translate(true, o) << endl;

    File::openBookList();
    File::openMemberList();

    ViewModel::Login();

    Vars::orderList.emplace_back(Vars::CurrentUser);

    while (true)
    {
        switch (ViewModel::MainMenu())
        {
            case 1:
                if (Vars::orderList.empty())
                {
                    cout << "当前购物车内空空如也。" << endl;
                }
                else
                {
                    for (auto order: Vars::orderList)
                    {
                        cout << ViewModel::translate(true, order) << endl;
                    }
                }
                break;
            case 2:
                cout << ViewModel::translate(true, Vars::CurrentUser) << endl;
                break;
            case 3:
                for (int i = 0; auto book: Vars::bookList)
                {
                    cout << ++ i << ":" << endl;
                    cout << ViewModel::translate(true, book);
                }
                cout << "请输入想购买的书序号和数量" << endl;
                int bookNum, quantity;
                cin >> bookNum >> quantity;
                if (bookNum <= Vars::bookListVector.size() && bookNum > 0)
                {
                    Vars::orderList[0].addItem(Vars::bookListVector[bookNum - 1], quantity);
                }
                else
                {
                    cout << "您的输入有误，请检查。" << endl;
                }
                break;
            case 4:
                for (auto order: Vars::orderList)
                {
                    cout << ViewModel::translate(true, order) << endl;
                }
                goto Exit;
            default:
                cout << "未知命令。请检查输入" << endl;
                break;

        }
    }

    Exit:
    File::saveReceipt();
    File::saveBookList();
    File::saveMemberList();

    return 0;
}
