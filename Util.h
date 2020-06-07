//
// Created by Swung 0x48 on 2020/6/2.
//

#ifndef BOOKSTORE_UTIL_H
#define BOOKSTORE_UTIL_H
#include <string>
using namespace std;

class Util
{
public:
    static string to_string(int val) {
        char buf[20];
        sprintf(buf, "%d", val);
        return string(buf);
    }

    static string to_string(double val) {
        char buf[2000];
        sprintf(buf, "%.2f", val);
        return string(buf);
    }

    static string to_string(const char* val) {
        return string(val);
    }
};


#endif //BOOKSTORE_UTIL_H
