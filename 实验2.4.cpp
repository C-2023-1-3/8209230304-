#include<iostream>
using namespace std;
#include <cmath>
int main() {
	float a, b;
	char x;
	cout << "������һ������ʽ���磺3*4 ��12+7 ��8/5"<<endl;
	cin >> a >> x >> b;
	switch (x) {
	case('+'): {
		a = a + b;
		cout << "���Ϊ" << a;
		break;
	}
	case('-'): {
		a = a - b;
		cout << "���Ϊ" << a;
		break;
	}
	case('*'): {
		a = a * b;
		cout << "���Ϊ" << a;
		break;
	}
	case('/'): {
		a = a / b;
		cout << "���Ϊ" << a;
		break;
	}
	case('%'): {
		int c = a / b;
		a = a - b * c;
		cout << "���Ϊ" << a;
		break;
	}
	default:
		cout << "������Ƿ�";
	}
	
   return 0;
 }
