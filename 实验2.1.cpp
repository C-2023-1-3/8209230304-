#include<iostream>
#include<cctype>
using namespace std;
int main() {
	char a;
	cin >> a;
	if (a<='z'&&a>='a') {
		cout << "���Сд��ĸ�Ĵ�д��ʽΪ"<<endl;
		cout.put(toupper(a));
	}
	else {
		cout << (int)a;
	}
}