#include <iostream>
#include "member.h"
#include "order.h"
#include "Presenter.h"
#include "Vars.h"
#include "File.h"
using namespace std;

int main()
{
    File::openBookList();
    File::openMemberList();

    Presenter::Login();

    Vars::orderList.emplace_back(Vars::CurrentUser);

    while (true)
    {
        switch (Presenter::MainMenu())
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
                        cout << Presenter::translate(true, order) << endl;
                    }
                }
                break;
            case 2:
                cout << Presenter::translate(true, Vars::CurrentUser) << endl;
                break;
            case 3:
                for (int i = 0; auto book: Vars::bookList)
                {
                    cout << ++ i << ":" << endl;
                    cout << Presenter::translate(true, book);
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
                    cout << Presenter::translate(true, order) << endl;
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
