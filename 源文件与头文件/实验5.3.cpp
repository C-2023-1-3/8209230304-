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
			cout << "�����������" << i + 1 << "��������ĳ������ߣ�����" << endl;
			cin >> length >> width >> height;
			v[i] = length * width * height;
		}
		for (int i = 0; i < 3; i++) {
			cout << "��" << i + 1 << "������������Ϊ��" << v[i] << endl;
		}
		return 0;
	}
};
int main() {
	volume v1;
	v1.cal_v();
}