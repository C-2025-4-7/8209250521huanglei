#include<iostream>
using namespace std;
int gys(int x,int y) {
	int gys;
	for (int i = 1; i <= min(x,y); i++) {
		if (x % i == 0&&y%i==0) {
			gys = i;
		}
	}
	return gys;
}
int gbs(int x, int y) {
	int gbs;
	gbs = x * y / gys(x, y);
	return gbs;
}
int main() {
	int m, n;
	cin >> m >> n;
	cout << "最大公约数是"<<gys(m,n)<<endl;
	cout << "最小公倍数是"<< gbs(m, n)<<endl;
	return 0;
}