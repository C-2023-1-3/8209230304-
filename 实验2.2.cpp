#include<iostream>
using namespace std;
int main() {
	float x,a;
	cin >> x;
	if (x > 0 && x < 1) {
		cout << 3 - 2 * x << endl;
	}
	else if (x >= 1 && x < 5) {
		cout << 2 / (4 * x) + 1 << endl;
	}
	else if (x >= 5 && x < 10) {
		cout << x * x << endl;
	}
	else cout << "输入的x值不在定义域（0,10）内";
}