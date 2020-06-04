//
// Created by Swung 0x48 on 2020/6/3.
//

#include "File.h"
#include "Vars.h"
#include "ViewModel.h"
#include "book.h"
#include "member.h"
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
    ifs.open(memberListPath, ios::in);
    string str;
    while (getline(ifs, str))
    {
        if (!str.empty())
        {
            istringstream ss(str);  // Construct a string stream from line.
            int type;
            double discountRate;
            string name;
            string address;
            int id;
            ss >> type >> discountRate >> name >> address >> id;
            member newMember(type, name, address, id);
            Vars::memberList.insert(newMember);
        }
    }
    ifs.close();
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
    ifs.open(bookListPath, ios::in);
    string str;
    while (getline(ifs, str))
    {
        if (!str.empty())
        {
            istringstream ss(str);  // Construct a string stream from line.
            string name;
            string author;
            string pubHouse;
            string isbn;
            double price = 0;
            ss >> name >> author >> pubHouse >> isbn >> price;
            book newBook(name, author, pubHouse, isbn, price);
            Vars::bookList.insert(newBook);
        }
    }
    ifs.close();
}

void File::saveMemberList()
{
    ofs.open(memberListPath, ios::out | ios::trunc);
    for (auto member: Vars::memberList)
    {
        ofs << ViewModel::translate(false, member) << endl;
    }
//    ofs << 0 << endl;
    ofs.close();
}

void File::saveBookList()
{
    ofs.open(bookListPath, ios::out | ios::trunc);
    for (auto book: Vars::bookList)
    {
        ofs << ViewModel::translate(false, book) << endl;
    }
//    ofs << 0 << endl;
    ofs.close();
}