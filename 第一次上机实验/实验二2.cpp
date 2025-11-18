#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int x, y;
    cout << "ÊäÈëxµÄÖµ£º";
    cin >> x;
    if (0 < x < 1) {
        y = 3 - 2 * x;
    }
    else if (1 <= x < 5) {
        y = 2 / (4 * x) + 1;
    }
    else {
        y = x * x;
    }
    cout << y << endl;
    /////////////////////////////////////////////////////2t
    return 0;
}