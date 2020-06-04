//
// Created by Swung 0x48 on 2020/6/3.
//

#include "File.h"
#include "Vars.h"
#include "ViewModel.h"
#include <iostream>
#include <fstream>
using namespace std;

ofstream File::ofs;
ifstream File::ifs;

string File::receiptPath = "receipt.txt";
string File::memberListPath = "member.txt";
string File::bookListPath = "book.txt";

void File::openMemberList()
{

}

void File::saveReceipt()
{
    ofs.open(receiptPath, ios::out | ios::trunc);
    ofs << "-\tRECEIPT\t-" << endl;
    for (auto order: Vars::orderList)
    {
        ofs << ViewModel::translate(true, order) << endl;
    }
    ofs << "-\tEnd of this receipt\t-" << endl;
    ofs.close();
}

void File::openBookList()
{

}

void File::saveMemberList()
{
    ofs.open(memberListPath, ios::out | ios::trunc);
    for (auto member: Vars::memberList)
    {
        ofs << ViewModel::translate(false, member) << endl;
    }
    ofs.close();
}

void File::saveBookList()
{
    ofs.open(bookListPath, ios::out | ios::trunc);
    for (auto book: Vars::bookList)
    {
        ofs << ViewModel::translate(false, book) << endl;
    }
    ofs.close();
}
