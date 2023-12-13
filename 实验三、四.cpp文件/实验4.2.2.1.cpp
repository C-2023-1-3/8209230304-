#include<iostream>
using namespace std;
int indexOf(char *s1[], char *s2[]);
int main() {
	char ss1[] = { "love" };
	char ss2[] = { "I love you!" };
	char* s1[] = { {} };
	char* s2[] = { {} };
	for (int i = 0; i < 5; i++) {
		s1[i] = &ss1[i];
	}
	for (int i = 0; i < 12; i++) {
		s2[i] = &ss2[i];
	}
	cout << indexOf(s1, s2);
}
int indexOf(char* s1[], char* s2[]) {
	
	for (int i = 0, j = 0;; ) {
		if (*s1[i] == *s2[j]) {
			i++, j++;
			if (*s1[i] == *s1[i + 100]) {
				return j - i;
				break;
			}

		}
		else {
			if (0 != i) {
				return -1;
				break;
			}
			if (*s2[j] == *s2[j + 100]) {
				return -1;
				break;
			}
			j++;
		}
	}

}