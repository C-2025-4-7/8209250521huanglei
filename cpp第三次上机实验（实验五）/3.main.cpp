#include <iostream>     //将类声明头文件包含进来
using namespace std;
class cft {
private:
	float length;
	float width;
	float height;
	float v;
public:
	void setup() {
		float l,  w,  h;
		cin >> l >> w >> h;
		this->length = l;
		this->width = w;
		this->height = h;
		this->v = l * w * h;
	}
	void show() {
		cout << "体积是"<<this->v << endl;
	}
};
int main() {
	cft cft1;
	cout << "输入第一个长方体的长，宽，高" << endl;
	cft1.setup();
	cft1.show();
	cft cft2;
	cout << "输入第二个长方体的长，宽，高" << endl;
	cft2.setup();
	cft2.show();
	cft cft3;
	cout << "输入第三个长方体的长，宽，高" << endl;
	cft3.setup();
	cft3.show();
	return 0;
}