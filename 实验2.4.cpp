#include<iostream>
using namespace std;
#include <cmath>
int main() {
	float a, b;
	char x;
	cout << "请输入一个简单算式例如：3*4 ；12+7 ；8/5"<<endl;
	cin >> a >> x >> b;
	switch (x) {
	case('+'): {
		a = a + b;
		cout << "结果为" << a;
		break;
	}
	case('-'): {
		a = a - b;
		cout << "结果为" << a;
		break;
	}
	case('*'): {
		a = a * b;
		cout << "结果为" << a;
		break;
	}
	case('/'): {
		a = a / b;
		cout << "结果为" << a;
		break;
	}
	case('%'): {
		int c = a / b;
		a = a - b * c;
		cout << "结果为" << a;
		break;
	}
	default:
		cout << "运算符非法";
	}
	
   return 0;
 }
