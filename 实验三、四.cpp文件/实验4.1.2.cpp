#include<iostream>
using namespace std;
int main() {
	double list[10] = { 3.2,5.8,99.1,60,30.25,0.55,25,64,114514,2023};
	bool changed = true;
	cout << "读入的十个数为：" << endl << "3.2 5.8 99.1 60 30.25 0.55 25 64 114514 2023" << endl;
	do
	{
		
		for (int j = 0; j < 9; j++) {
			changed = false;
			if (list[j] > list[j + 1]){
				double i = 0;
				i = list[j + 1];
				list[j + 1] = list[j];
				list[j] = i;
				//swap list[j] with list[j + 1];
				changed = true;
			}
		}
	} while (changed);
	cout << "由小至大排序后：" << endl;
	for (int i = 0; i < 10; i++) {
		cout << list[i] << " ";
	}
}