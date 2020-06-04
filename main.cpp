#include <iostream>
#include "member.h"
#include "order.h"
#include "ViewModel.h"
#include "Vars.h"
#include "File.h"
using namespace std;

int main()
{
    book mem("name", "Fred", "a pubhouse", "a-vvv-ccc", 50);
    book mem2(mem);
    book mem3(mem);
    book mem4("aaa", "Frd", "a puhouse", "a-vvv-ddc", 40);
    Vars::bookList.insert(mem);
    Vars::bookList.insert(mem2);
    Vars::bookList.insert(mem3);
    Vars::bookList.insert(mem4);

    member me(1, "Tom", "Ave");
    Vars::memberList.insert(me);

    order o(me);
    o.addItem(mem, 1);
    o.addItem(mem3, 1);
    o.addItem(mem4, 1);
    Vars::orderList.push_back(o);

    cout << o.getBuyer().getName() << endl;
    cout << o.getSubtotal() << endl;
    cout << ViewModel::translate(true, o) << endl;

    //ViewModel::Login();

    File::saveReceipt();
    File::saveBookList();
    File::saveMemberList();

    return 0;
}
