#include<iostream>
using namespace std;
int main() {
	int a, b, x, y = 1, z = 1;
	cout << "请输入两个正整数" << endl;
	cin >> a >> b;
	if (a < b) {
		x = a;
		a = b;
		b = x;
	}
	for (int i = b; i >= 1; i--) {
		if ((a % i == 0) && (b % i == 0)) {
			y = y * i;
			cout << "这两个数的最大公约数为：" << y << endl;
			break;
		}
	}
	for (int j = a; j <= a * b; j++) {
		if ((j % a == 0) && (j % b == 0)) {
			cout << "这两个数的最小公倍数为：" << j;
			break;
		}
	}
}