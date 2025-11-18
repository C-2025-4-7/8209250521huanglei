#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    cout << "输入一个小写字母";
    char i;
    cin >> i;
    if (97 <= i <= 122)
        cout << char(i - 32) << endl;
    else
        cout << int(i + 1) << endl;
    ///////////////////////////////////////////////////1t
    return 0;
}