#include<iostream>
#include<cctype>
using namespace std;
int main() {
	char a;
	cin >> a;
	if (a<='z'&&a>='a') {
		cout << "这个小写字母的大写形式为"<<endl;
		cout.put(toupper(a));
	}
	else {
		cout << (int)a;
	}
}