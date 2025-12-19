#include<iostream>
using namespace std;
int main() {
	int a[10],c[10];
	int x = 0, y = 0, z = 0;
	cout << "Enter ten numbers:";
	for (int i = 0; i < 10; i++) {
		cin >>c[i];
	}
	for (int q = 0; q < 10; q++) {
		for (int j = 0; j <=z; j++) {
			if (c[q] == c[j]) {
				y++;
			}
		}
		if (y == 1) {
			a[x] = c[q];
			if (x < 10) {
				x++;
			}
		}
		y = 0;
		z++;
	}
	cout << "The distinct numbers are: ";
	for (int q = 0; q < x; q++)
		cout <<a[q] << " ";
	return 0;
}