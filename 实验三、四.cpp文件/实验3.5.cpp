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
	cout << "��ʮ��ֻʣһ������" << endl;
	cout << "��ô��һ����"<<peach(1)<<"������";
	return 0;
}