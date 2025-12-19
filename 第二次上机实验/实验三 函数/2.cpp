#include<iostream>
#include<iomanip>
using namespace std;
bool is_prime(int num) {
	if (num == 2) {
		return true;
	}
	else {
		for (int i = 2; i < num; i++) {
			if (num % i == 0) {
				return false;
			}
			else {
				return true;
			}
		}
	}
}
int main() {
	int found = 0;
	int num = 2;
	while (found < 200) {
		if (is_prime(num) == true) {
			found++;
			cout << setw(8) << num;
			if (found % 10 == 0) {
				cout << endl;
			}
		}
		num++;
	}
	return 0;
}