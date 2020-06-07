//
// Created by Swung 0x48 on 2020/6/3.
//

#ifndef BOOKSTORE_PRESENTER_H
#define BOOKSTORE_PRESENTER_H
#include <string>
#include "member.h"
#include "order.h"
using namespace std;

class Presenter
{
public:
    static string translate(bool HumanReadable, member& Member);
    static string translate(bool HumanReadable, order& Order);
    static string translate(bool HumanReadable, book& Book);

    static void Login();
    static int MainMenu();
};


#endif //BOOKSTORE_PRESENTER_H
