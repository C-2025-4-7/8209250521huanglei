#include<iostream>
using namespace std;
int main() {
	bool gz[100] = { false };
	for (int i = 0; i < 100; i++) {
		for (int y = i; y < 100; y += (i+1)) {
			if (gz[y] == true) {
				gz[y] = false;
			}
			else {
				gz[y] = true;
			}
		}
	}
	for (int i = 0; i < 100; i++) {
		if (gz[i] == true) {
			cout << i+1 << " ";
		}
	}
	return 0;
}