#include<iostream>
using namespace std;
int main() {
	float a, b, c, x;
    cout << "�����������ε�����" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b || a == c || b == c)
		{
		    cout << "�ǵ���������" << endl;
		}
		else
		{
		    cout << "���ǵ���������" << endl;
		}
	}
	else
	{
		cout << "����������" << endl;
	}
		
	return 0;
}