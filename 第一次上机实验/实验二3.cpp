#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int a, b, c;
    cout << "输入三角形的三边:";
    cin >> a >> b >> c;
    if ((a + b) > c and (b + c) > a and (a + c) > b)
        if (a == b or b == c or c == a)
            cout << "该三角形是等腰三角形" << endl;
        else cout << "该三角形不是直角三角形" << endl;
    else
        cout << "不能构成三角形" << endl;
    /////////////////////////////////////////////////////3t
    return 0;
}