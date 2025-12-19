#include<iostream>
#include<cstring>
using namespace std;
void count(const char s[], int counts[]) {
	int len = strlen(s);
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < len; j++) {
			if (s[j] == char('a' + i) || s[j] == char('A' + i)) {
				counts[i]++;
			}
		}
	}
}
int main() {
	char string[100];
	int counts[26] = { 0 };
	cout << "Enter a string: ";
	cin.getline(string,100);
	count(string, counts);
	for (int i = 0; i < 26; i++) {
		if (counts[i] != 0) {
			cout << char('a' + i) << ":" << counts[i] << "times" << endl;
		}
	}
	return 0;
}