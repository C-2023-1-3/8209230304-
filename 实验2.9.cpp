#include<iostream>
using namespace std;
int main() {
	cout << "苹果每个 0.8 元，第一天买 2 个，第二天开始，每天买前天的 2 倍，直到购买的苹果数不超过100的最大值，求每天平均花多少钱。"<<endl<<endl;
	double a = 0, c, m = 0;
	for (int i = 2, d = 0;; i = i * 2) {
		m = m + i;
		if(m > 100){
            c = ( 0.8 * a ) / d;
			cout << "平均每天花" <<c<<"元" << endl;
			break;
		}
		a = m;
		d = d + 1;
	}
}