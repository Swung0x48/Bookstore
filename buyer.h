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
    int _id;
    string _address;
    double _subtotal;
public:
    buyer();
    buyer(string name, int Id, string address, double subtotal);
    string getName() { return _name; }
    string getAddress() { return _address; };
    double getSubtotal() { return _subtotal; };
    int getId() { return _id; };
    virtual void setSubtotal(double subtotal) = 0;
};


#endif //BOOKSTORE_BUYER_H
