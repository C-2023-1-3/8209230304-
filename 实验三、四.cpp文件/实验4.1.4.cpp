#include<iostream>
using namespace std;


int merge(int list1[], int size1, int list2[], int size2, int list3[]);
int main() {
	int size1;
	int size2;
	int list1[] = { { } };
	int list2[] = { { } };
	int list3[] = { { } };

	cout << "请先输入数组1的元素个数" << endl;
	cin >> size1;
	cout << "再输入已经由小至大排列好的元素：" << endl;
	for (int i = 0; i < size1; i++) {
		cin >> list1[i];
	}
	
	cout << "请先输入数组2的元素个数" << endl;
	cin >> size2;
	cout << "再输入已经由小至大排列好的元素：" << endl;
	for (int i = 0; i < size2; i++) {
		cin >> list2[i];
	}

	merge(list1, size1, list2, size2, list3);
	for (int i = 0; i < size1 + size2; i++) {
		cout << list3[i] << "  ";
	}
	return 0;
}

int merge(int list1[], int size1, int list2[], int size2, int list3[]) {
	for (int i = 0, j = 0, k = 0; k < size1 + size2; k++) {
		if (i < size1 && j >= size2) {
			list3[k] = list1[i];
			i++;
		}
		if (i >= size1 && j < size2) {
			list3[k] = list2[j];
			i++;
		}
		if (i < size1 && j < size2) {
			if (list1[i] < list2[j]) {
				list3[k] = list1[i];
				i++;
			}
			else {
				list3[k] = list2[j];
				j++;
			}
		}
		
	}
	return 0;
}