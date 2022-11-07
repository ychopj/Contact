//
// Created by c on 2022/11/7.
//
#include"function.h"
void showMenu()
{
    cout<<"************************************"<<endl;
    cout<<"********    1.添加联系人   ***********"<<endl;
    cout<<"********    2.显示联系人   ***********"<<endl;
    cout<<"********    3.删除联系人   ***********"<<endl;
    cout<<"********    4.查找联系人   ***********"<<endl;
    cout<<"********    5.修改联系人   ***********"<<endl;
    cout<<"********    6.清空通讯录   ***********"<<endl;
    cout<<"********    0.退出通讯录   ***********"<<endl;
    cout<<"************************************"<<endl;
}

void AddPerson(AddressBooks *abs)
{
    if(abs->m_Size == MAX)
    {
        cout<<"通讯录已满，无法添加"<<endl;
        return;
    }
    else
    {
        string name;
        cout<<"请输入姓名"<<endl;
        cin>>name;
        abs->personArray[abs->m_Size].m_Name = name;
        int sex = 0;
        cout<<"请输入性别："<<endl;
        cout<<"1--男"<<endl;
        cout<<"2--女"<<endl;
        while (true) {
            cin >> sex;
            if (sex == 1 || sex == 2) {
                abs->personArray[abs->m_Size].m_Sex = sex;
                break;
            }
            cout << "输入有误，请重新输入" << endl;
        }
        int age = 0;
        cout<<"请输入年龄："<<endl;
        cin>>age;
        abs->personArray[abs->m_Size].m_Age = age;
        string phone;
        cout<<"请输入电话:"<<endl;
        cin>>phone;
        abs->personArray[abs->m_Size].m_Phone = phone;
        string address;
        cout<<"请输入住址:"<<endl;
        cin>>address;
        abs->personArray[abs->m_Size].m_Addr = address;

        abs->m_Size++;
        cout<<"添加成功"<<endl;
        system("pause");
        system("cls");
    }

}