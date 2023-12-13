#include<iostream>
using namespace std;
void num(int a, int b);
int m, n;
int main() {
	cout << "请输入两个正整数" << endl;
	
	cin >> m >> n;
	num(m, n);

	cout << "这两个数的最大公约数为：" << m << endl;
	cout << "这两个数的最小公倍数为：" << n;
}
void num(int a, int b) {
	int  x, y = 1, z = 1;
	
	if (a < b) {
		x = a;
		a = b;
		b = x;
	}
	for (int i = b; i >= 1; i--) {
		if ((a % i == 0) && (b % i == 0)) {
			y = y * i;
			m = y;
			break;
		}
	}
	for (int j = a; j <= a * b; j++) {
		if ((j % a == 0) && (j % b == 0)) {
			n = j;
			break;
		}
	}
}