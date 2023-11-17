#include<iostream>
using namespace std;
#define pi 3.14
int main(){
	int r, h;
	cout << "请依次输入圆锥的底面半径、锥高" << endl;
	cin >> r >> h;
	float V;
	V = pi * r * r * h / 3;
	cout <<"该圆锥的体积为" << V;
	return 0;
}
