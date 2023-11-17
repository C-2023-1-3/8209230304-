#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	float F, C;
	cout << "请输入一个华氏温度值（F）" << endl;
	cin >> F;
	C = (F - 32) / 1.8;
	cout << fixed << setprecision(2) << "其对应的摄氏温度值（C）为" << C;
}