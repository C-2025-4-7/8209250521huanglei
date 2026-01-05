#include <iostream>
#include<cstring>
using namespace std;
#include"student.h"            //不要漏写此行，否则编译通不过
void Student::display()         //在类外定义display类函数
{
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
}
void Student::set_valve(int num, char* name, char sex) {
	this->num = num;
	strncpy_s(this->name, name, 19);
	this->sex = sex;
}