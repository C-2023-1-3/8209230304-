#include<iostream>
using namespace std;
class Time{
private:              
	int hour;
	int minute;
	int sec;
public:
	void Time_print() {
		cout << "���롰ʱ��:";
		cin >> hour;      
		cout << endl << "���롰�֡�:";
		cin >> minute;
		cout << endl << "���롰�롱:";
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
//��д����Ҫ��
//(1)�����ݳ�Ա��Ϊ˽�еģ�
//(2)�����������Ĺ��ܸ�Ϊ�ɳ�Ա����ʵ�֣�
//(3)�������ڶ����Ա������