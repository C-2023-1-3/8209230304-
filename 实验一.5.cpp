#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	float F, C;
	cout << "������һ�������¶�ֵ��F��" << endl;
	cin >> F;
	C = (F - 32) / 1.8;
	cout << fixed << setprecision(2) << "���Ӧ�������¶�ֵ��C��Ϊ" << C;
}