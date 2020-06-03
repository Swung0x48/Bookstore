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

    static string to_string(unsigned val) {
        char buf[20];
        sprintf(buf, "%u", val);
        return string(buf);
    }

    static string to_string(long val) {
        char buf[20];
        sprintf(buf, "%ld", val);
        return string(buf);
    }

    static string to_string(unsigned long val) {
        char buf[20];
        sprintf(buf, "%lu", val);
        return string(buf);
    }

    static string to_string(float val) {
        char buf[200];
        sprintf(buf, "%.2f", val);
        return string(buf);
    }

    static string to_string(long double val) {
        char buf[20000];
        sprintf(buf, "%.2Lf", val);
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
