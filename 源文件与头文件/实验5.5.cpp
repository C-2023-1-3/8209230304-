#include<iostream>
using namespace std;
class Point {
private:
	int x, y;
public:
	Point(int a, int b) {
		x = a, y = b;
	}
	void setPoint(int i, int j) {
		x += i, y += j;
	}
	void display() {
		cout << "�޸ĺ������Ϊ��(" << x << "," << y << ")" << endl;
	}
};
int main() {
	Point P(60, 80);
	P.setPoint(4, 1);
	P.display();
}