#include<iostream>
using namespace std;
int indexOf(char s1[], char s2[]);
int main() {
	char ss1[] = { "love" };
	char ss2[] = { "I love you!" };
	cout<<indexOf(ss1, ss2);
	
	
}
int indexOf(char s1[], char s2[]) {
	char b[1] = {};
	for (int i = 0, j = 0;; ) {
		if (s1[i] == s2[j]) {
			i++, j++;
			if (s1[i]==s1[i+1000]) {
				return j - i;
				break;
			}
			
		}
		else {
			if (0 != i) {
				return -1;
				break;
			}
			if (s2[j] == s2[j + 1000]) {
				return -1;
				break;
			}
			j++;
		}
	}

}