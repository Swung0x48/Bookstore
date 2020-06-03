//
// Created by Swung 0x48 on 2020/6/2.
//

#ifndef BOOKSTORE_RANDOMGENERATOR_H
#define BOOKSTORE_RANDOMGENERATOR_H

#include <vector>
#include <random>
using namespace std;

class randomGenerator
{
private:
    static default_random_engine randEngine;
public:
    static int getRandom() { return randEngine(); }
};


#endif //BOOKSTORE_RANDOMGENERATOR_H
