#include <iostream>             //��������ͷ�ļ���������
#include<string.h>
#include "student.h"
using namespace std;
int main()
{
	Student stud;                //�������
	                             //Student stud1(007, "tcg", 'm');
	stud.set_value(007, 'm');
	stud.display();              //ִ��stud�����display����
	return 0;
}