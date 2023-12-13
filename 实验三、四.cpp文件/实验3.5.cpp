#include<iostream>
using namespace std;
int b = 0;
int peach(int a) {
	if (b==9) {
		return a;
	}
	else {
		b++;
		peach((a + 1) * 2);
	}	
}
int main() {
	cout << "第十天只剩一个桃子" << endl;
	cout << "那么第一天有"<<peach(1)<<"个桃子";
	return 0;
}