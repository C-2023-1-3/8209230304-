#include<iostream>
using namespace std;
void num(int a, int b);
int m, n;
int main() {
	cout << "����������������" << endl;
	
	cin >> m >> n;
	num(m, n);

	cout << "�������������Լ��Ϊ��" << m << endl;
	cout << "������������С������Ϊ��" << n;
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