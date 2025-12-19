#include<iostream>
using namespace std;
int* f()
{
    int* list = new int[4];  // 在堆上分配内存
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    list[3] = 4;
    return list;  // 返回堆内存地址 
}
void main()
{
	int* p = f();
	cout << p[0] << endl;
	cout << p[1] << endl;
    delete[] p;
}
