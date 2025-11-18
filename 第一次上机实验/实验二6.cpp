#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int a, b;
    cout << "输入两个正整数：" << endl;
    cin >> a >> b;
    int oria = a, orib = b;
    int temp;
    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    int gcd = a;  // 
    int lcm = oria * orib / gcd;

    cout << "最大公约数(GCD): " << gcd << endl;
    cout << "最小公倍数(LCM): " << lcm << endl;
    ///////////////////////////////////////////////6t
    return 0;
}