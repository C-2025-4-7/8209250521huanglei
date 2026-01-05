#include<iostream>
using namespace std;
//设有一描述坐标点的类Point，其私有变量x和y代表一个点的(x,y)坐标值。
// 请编写程序实现以下功能：利用构造函数传递参数，在定义对象时将x、y坐标值初始化为（60,80）；
// 利用公有成员函数void setPoint(int i, int j)将坐标值修改为(60+i,80+j)；
// 利用公有成员函数display()输出修改后的坐标值。
// 主函数中通过定义对象，验证各个函数。
class Point {
private:
	int x;
	int y;
public:
	Point(int x=60,int y=80){
		this->x = x;
		this->y = y;
	}
	void setPoint(int i, int j) {
		this->x += i;
		this->y += j;
	}
	void display() {
		cout << "x=" << x << endl;
		cout << "y=" << y << endl;
	}
};
int main() {
	Point p1;
	cout << "p1:";
	p1.display();
	Point p2(999, 666);
	cout << "p2:";
	p2.display();
	cout << "输入对p1的移动:";
	int i, j;
	cin >> i >> j;
	p1.setPoint(i, j);
	cout << "修改后p1：" << endl;
	p1.display();
	
	return 0;
}