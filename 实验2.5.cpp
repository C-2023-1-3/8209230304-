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
	cout << "字母总数为：" << letter << endl;
	cout << "空格总数为：" << space << endl;
	cout << "数字总数为：" << digit << endl;
	cout << "其他字符总数为：" << others << endl;
	return 0;

	
}