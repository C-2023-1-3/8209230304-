#include<iostream>
using namespace std;
class volume {
private:
	double length;
	double width;
	double height;
public:
	int cal_v() {
		double v[3];
		for (int i = 0; i < 3; i++) {
			cout << "请依次输入第" << i + 1 << "个长方体的长、宽、高：（）" << endl;
			cin >> length >> width >> height;
			v[i] = length * width * height;
		}
		for (int i = 0; i < 3; i++) {
			cout << "第" << i + 1 << "个长方体的体积为：" << v[i] << endl;
		}
		return 0;
	}
};
int main() {
	volume v1;
	v1.cal_v();
}