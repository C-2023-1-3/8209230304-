#include<iostream>
using namespace std;
int main() {
	float a, b, c, x;
    cout << "请输入三角形的三边" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b || a == c || b == c)
		{
		    cout << "是等腰三角形" << endl;
		}
		else
		{
		    cout << "不是等腰三角形" << endl;
		}
	}
	else
	{
		cout << "不是三角形" << endl;
	}
		
	return 0;
}