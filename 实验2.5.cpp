#include<iostream>
using namespace std;
int main() {
	int letter = 0, space = 0, digit = 0, others = 0;
	char c;
	while ((c = getchar()) ){
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
				letter++;
		else if (c == ' ')
				space++;
		else if (c >= '0' && c <= '9')
				digit++;
		else others++;
	}
	cout << "��ĸ����Ϊ��" << letter << endl;
	cout << "�ո�����Ϊ��" << space << endl;
	cout << "��������Ϊ��" << digit << endl;
	cout << "�����ַ�����Ϊ��" << others << endl;
	return 0;

	
}