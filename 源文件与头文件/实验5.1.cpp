#include<iostream>
using namespace std;
class Time{
private:              
	int hour;
	int minute;
	int sec;
public:
	void Time_print() {
		cout << "输入“时”:";
		cin >> hour;      
		cout << endl << "输入“分”:";
		cin >> minute;
		cout << endl << "输入“秒”:";
		cin >> sec;
		cout << endl << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1; 
	t1.Time_print();
	return 0;
}
//改写程序，要求：
//(1)将数据成员改为私有的；
//(2)将输入和输出的功能改为由成员函数实现；
//(3)在类体内定义成员函数。