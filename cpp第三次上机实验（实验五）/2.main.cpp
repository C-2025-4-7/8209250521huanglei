#include <iostream>     //将类声明头文件包含进来
using namespace std;
#include"student.h"  
int main()
{
	Student stud;                //定义对象
	char name[] = "tcg";
	stud.set_valve(007, name, 'm');
	stud.display();              //执行stud对象的display函数
	return 0;
}
