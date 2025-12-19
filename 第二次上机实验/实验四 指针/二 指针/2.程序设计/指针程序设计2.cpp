#include<iostream>
using namespace std;
int parseHex(const char* const hexString) {
	int result = 0;
	for (int i = 0; hexString[i] != '\0'; i++) {
		char s = hexString[i];
		int k = 0;
		if (s >= 'a' && s <= 'f') {
			k = s - 'a' + 10;
		}
		else if (s >= 'A' && s <= 'F') {
			k = s - 'A' + 10;
		}
		else if (s >= '0' && s <= '9') {
			k = s - '0';
		}
		else {
			return 0;
		}
		result = result * 16 + k;
	}
	return result;
}
int main() {
	cout << parseHex("A5") << endl;
	return 0;
}
