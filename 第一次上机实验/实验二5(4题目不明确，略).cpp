#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    cout << "输入一行字符，统计各种字符的个数";
    int eng = 0, gm = 0, num = 0, oth = 0;
    char wo;
    cin >> wo;
    while (cin.get(wo) && wo != '\n') {
        if ((wo >= 'a' && wo <= 'z') || (wo >= 'A' && wo <= 'Z')) {
            eng++;
        }
        else if (c >= '0' && c <= '9') {
            num++;
        }
        else if (c == ' ') {
            gm++;
        }
        else {
            oth++;
        }
    }
    cout << "字母个数" << eng << endl;
    cout << "数字个数" << num << endl;
    cout << "空格个数" << gm << endl;
    cout << "其他个数" << oth << endl;
    ///////////////////////////////////////////////5t
    return 0;
}