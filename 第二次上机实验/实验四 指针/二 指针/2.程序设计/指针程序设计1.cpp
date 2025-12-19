#include<iostream>
#include<cstring>
using namespace std;
int indexOf(const char*s1, const char*s2) {
	int len1 = strlen(s1);  // 获取s1长度
	int len2 = strlen(s2);  // 获取s2长度
	for (int i = 0; i <= len2 - len1; i++) {
		bool found = true;
		for (int j = 0; j < len1; j++) {
			if (s2[i + j] != s1[j]) {
				found = false;
				break;
			}
		}
		if (found) {
			return i;
		}
	}
	return -1;
}
int main() {
	char string1[100], string2[100];
	cout << "Enter the first string:";
	cin.getline(string1, 100);
	cout << "Enter the second string:";
	cin.getline(string2, 100);
	int x = indexOf(string1, string2);
	cout << "indexOf(\"" << string1 << "\", \"" << string2 << "\") is " << x;
	return 0;
}