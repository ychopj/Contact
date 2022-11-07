//
// Created by c on 2022/11/7.
//

#ifndef CONTACT_FUNCTION_H
#define CONTACT_FUNCTION_H
#include <iostream>
#include<string>
using namespace std;
#define MAX 1000

struct Person
{
    string m_Name;
    int m_Sex;
    int m_Age;
    string m_Phone;
    string m_Addr;
};

struct AddressBooks
{
    struct Person personArray[MAX];
    int m_Size;
};

void showMenu();
void AddPerson(AddressBooks *abs);
void showPerson();
void isExist();
void deletePerson();
void findPerson();
void modifyPerson();
void clearPerson();

#endif //CONTACT_FUNCTION_H
