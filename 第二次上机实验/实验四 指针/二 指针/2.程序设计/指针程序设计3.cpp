#include<iostream>
using namespace std;
void merge(int *list,int i) {
	for (int k = 0; k < i-1; k++)
		for (int j = 0; j < i-1; j++) {
			if (list[j] > list[j + 1])
			{
				int temp = list[j + 1];
				list[j + 1] = list[j];
				list[j] = temp;
			}
		}
}
int main() {
	int i;
	cin >> i;
	int* list = new int[i];
	for (int j = 0; j < i; j++) {
		cin >> list[j];
	}
	merge(list, i);
	for (int j = 0; j < i; j++) {
		cout<< list[j]<<" ";
	}
	delete[]list;
	return 0;
}