#include<iostream>
using namespace std;
int main() {
	double a, x, m;
	cout << "������һ������Ҫ����������" << endl;
	cin >> a;
	x = a;
	for (int i = 1;;) {
		m = (x + a / x) / 2;
		if ((x-m)<0.00001) {
			cout << "�����������ƽ����Ϊ:" << endl << m;
			break;
		}
		x = m;
	}
}