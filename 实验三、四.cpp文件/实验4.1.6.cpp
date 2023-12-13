#include<iostream>
using namespace std;
void count(const char s[], int counts[]) {
	char c[] = { 'a','b','c','d','e','f','g',
				 'h','i','j','k','l','m','n',
				 'o','p','q','r','s','t',
				 'u','v','w','x','y','z',
				 'A','B','C','D','E','F','G',
				 'H','I','J','K','L','M','N',
				 'O','P','Q','R','S','T',
				 'U','V','W','X','Y','Z' };
	for (int i = 0; i < sizeof(s)*4; i++) {
		for (int j = 0; j < 26; j++) {
			if ((s[i] == c[j]) || (s[i] == c[j + 26])) {
				counts[j]++;
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		if (counts[i] != 0) {
			cout << c[i] << ": " << counts[i] << " times" << endl;
		}
	}
}
int main() {
	int counts[26];
	for (int i = 0; i < 26; i++) {
		counts[i] = 0;
	}
	const char s[] = { "Welcome to ChangSha!" };
	cout << "Enter a string: " << s << endl;
	count(s, counts);
}