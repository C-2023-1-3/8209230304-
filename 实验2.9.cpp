#include<iostream>
using namespace std;
int main() {
	cout << "ƻ��ÿ�� 0.8 Ԫ����һ���� 2 �����ڶ��쿪ʼ��ÿ����ǰ��� 2 ����ֱ�������ƻ����������100�����ֵ����ÿ��ƽ��������Ǯ��"<<endl<<endl;
	double a = 0, c, m = 0;
	for (int i = 2, d = 0;; i = i * 2) {
		m = m + i;
		if(m > 100){
            c = ( 0.8 * a ) / d;
			cout << "ƽ��ÿ�컨" <<c<<"Ԫ" << endl;
			break;
		}
		a = m;
		d = d + 1;
	}
}