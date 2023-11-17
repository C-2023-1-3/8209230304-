#include<iostream>
using namespace std;
int main() {
	double a, x, m;
	cout << "请输入一个你想要开方的正数" << endl;
	cin >> a;
	x = a;
	for (int i = 1;;) {
		m = (x + a / x) / 2;
		if ((x-m)<0.00001) {
			cout << "这个数的算术平方根为:" << endl << m;
			break;
		}
		x = m;
	}
}