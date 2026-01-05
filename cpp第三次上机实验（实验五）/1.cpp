#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:             // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void inhour() {
		cout << "input hour:" << endl;
		int x;
		cin >> x;
		this->hour = x;
	}
	void inminute() {
		cout << "input minute:" << endl;
		int x;
		cin >> x;
		this->minute = x;
	}
	void insec() {
		cout << "input sec:" << endl;
		int x;
		cin >> x;
		this->sec = x;
	}
	void show() {
		cout << this->hour << ":" << this->minute <<":" << this->sec << endl;
	}
};
int main()
{
	Time tl; //定义t1为Time类对象
	tl.inhour();      //输入设定的时间 
	tl.inminute();
	tl.insec();
	tl.show();
	return 0;
}
