//
// Created by Swung 0x48 on 2020/6/2.
//

#ifndef BOOKSTORE_BUYER_H
#define BOOKSTORE_BUYER_H
#include <string>
using namespace std;

class buyer
{
protected:
    string _name;
    string _address;
public:
    buyer(string name, string address, int id)
        : _name(name), _address(address) {}
    string getName() { return _name; }
    string getAddress() { return _address; };
};


#endif //BOOKSTORE_BUYER_H
