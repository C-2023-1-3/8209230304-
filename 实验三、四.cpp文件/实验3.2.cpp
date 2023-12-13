#include<iostream>
using namespace std;
int arr[20][10] = {  };
int b = 0, c = 0;
bool is_prime(int num) {
	int j = 1;
	for (int i = num-1; i > 1; i--) {
		
		if (num % i == 0) {
			return false;
			j = 0;
			break;
			
		}
	}
	if ( j == 1) {
		cout << num << " ";
		arr[b][c] = num;
		c++;
		if (c == 10) {
			b++;
			cout << endl;
			c = 0;
		}
	}
}

int main() {
	arr[19][9] = 0;
	for (int a = 2;; a++) {
		is_prime(a);
		if (arr[19][9] != 0) {
			break;
		}
	}
	return 0;
}