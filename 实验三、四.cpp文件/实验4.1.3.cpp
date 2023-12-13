#include<iostream>
using namespace std;
int main() {
	bool locker[100];
	for (int i = 0; i < 100; i++) {
		locker[i] = true;
	}
	int b = 0;
	for (int i = 1; i < 100; i++) {
		
		b = i;
		int j = 2;
		locker[i] = !locker[i];
		for (; i < 100; ) {
			i = i + j;
			locker[i] = !locker[i];
		}
		i = b;
		j++;
	}
	cout << "所有开着的柜子的号码为：" << endl;
	for (int i = 0; i < 100; i++) {
		if (locker[i] == true) {
			cout << i+1 << " ";
		}
	}
	return 0;
}