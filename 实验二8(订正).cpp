#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    cout << "输入一个数，求其平方根";
    float aa;
    cin >> aa;
    float xn = aa;
    float xn0 = aa + 1;
    while (xn0 - xn >= 0.00001) {
        xn0 = xn;
        xn = (xn + aa / xn) / 2;
    }
    cout << xn << endl;
    /////////////////////////////////////////////////////8t
    return 0;
}