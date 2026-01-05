#include<iostream>
using namespace std;
//4、建立一个对象数组，内放5个学生的（学号，成绩），设立一个函数max，
// 用指向对象的指针作函数参数，在max函数中找出5个学生的最高成绩者，并输出其学号。
class student {
private:
	int num;
	int cj;
public:
	friend int max(student* p,int size);
	void set() {
		int n, c;
		cin >> n >> c;
		this->num = n;
		this->cj = c;
	}
};
int max(student* p,int size) {
	int m=p[0].cj;
	int n = 0;
	for (int i = 0; i < size; i++) {
		if (p[i].cj >= m) {
			m = p[i].cj;
			n = p[i].num;
		}
	}
	return n;
}
int main() {
	student student[5];
	for (int i = 0; i < 5; i++) {
		cout << "输入第" << i+1 << "名学生的学号和成绩" << endl;
		student[i].set();
	}
	cout << "成绩最高的学生的学号是" << max(student,5) << endl;
	return 0;
}