#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2,int list3[]) {
	for (int i = 0; i < size1; i++) {
		list3[i] = list1[i];
	}
	for (int i = 0; i < size2; i++) {
		list3[size1 + i] = list2[i];
	}
	for (int k = 0; k < size1+size2-1; k++)
		for (int j = 0; j < size1 + size2 - 1; j++) {
			if (list3[j] > list3[j + 1])
			{
				int temp = list3[j + 1];
				list3[j + 1] = list3[j];
				list3[j] = temp;
			}
		}
}
int main() {
	const int max = 80;
	int list1[max],list2[max],list3[max*2];
	int size1 , size2 ;
	//cout << "输入第一个数组的元素数:";
	cin >> size1;
	cout << "Enter list1:";
	for (int i = 0; i < size1; i++) {
		cin >> list1[i];
	}
	//cout << "输入第二个数组的元素数:";
	cin >> size2;
	cout << "Enter list2:";
	for (int i = 0; i < size2; i++) {
		cin >> list2[i];
	}
	merge(list1,size1,list2,size2,list3);
	cout << "The merged list is ";
	for (int i = 0; i < size1+size2; i++) {
		cout << list3[i]<<" ";
	}
	return 0;
}