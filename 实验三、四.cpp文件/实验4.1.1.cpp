#include<iostream>
using namespace std;
int main() {
	int arr[10];
	cout << "请输入十个数" << endl;
	cin >> arr[0];
	int i = 1;
	for (int k = 1; k < 10; i++, k++) {
		cin >> arr[i];
		for (int j = 0; j < i; j++) {
			if (arr[i] == arr[j]) {
				i--;
				break;
			}
		}
	}
	for (int m = 0; m <= i; m++) {
		if (arr[i] == arr[m]) {
			i--;
			break;
		}
	}
	for (int h = 0; h <= i; h++) {
		cout << arr[h] << " ";
	}
}