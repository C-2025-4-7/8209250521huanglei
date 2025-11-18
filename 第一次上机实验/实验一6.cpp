#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float i;
    cout << "请输入华氏温度：";
    cin  >> i;
    float j = (i - 32) * 5 / 9;
    cout << "对应的摄氏温度是：" << fixed<<setprecision(2)<<j;
    return 0;

    }