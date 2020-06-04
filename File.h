//
// Created by Swung 0x48 on 2020/6/3.
//

#ifndef BOOKSTORE_FILE_H
#define BOOKSTORE_FILE_H


#include <fstream>
using namespace std;

class File
{
private:
    static ofstream ofs;
    static ifstream ifs;

    static string receiptPath;
    static string memberListPath;
    static string bookListPath;

public:
    static void openMemberList();
    static void saveMemberList();
    static void openBookList();
    static void saveBookList();
    static void saveReceipt();
};


#endif //BOOKSTORE_FILE_H
