#include<iostream>
using namespace std;
int parseHex(const char* const hexString);
int main() {
	char str[] = "FFF";
	const char* const p = str;
	cout << "输入十六进制数：FFF" << endl;
	cout << "转换为十进制数为：" << parseHex(p) << endl;
}

int parseHex(const char* const hexString) {
	int a = 0;
	char Hex[17] = "0123456789ABCDEF";

	for (int i = 0; *(hexString + i) != '\0'; i++) {
		for (int j = 0; j < 16; j++) {
			if (*(hexString + i) == Hex[j]) {
				int b = 1;
				for (int k = 0; k < i; k++) {
					b = b * 16;
				}
				a = a + b * j;
			}
		}
	}
	return a;
}