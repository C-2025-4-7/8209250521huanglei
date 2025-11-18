#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int day = 0;
    float money = 0;
    for (int i = 2; i <= 100; i = i * 2) {
        money = money + i;
        day = day + 1;
    }
    float ave = money / day * 0.8;
    cout << "平均每天花" << ave << "元" << endl;
    ///////////////////////////////////////////////////9t
    return 0;
}