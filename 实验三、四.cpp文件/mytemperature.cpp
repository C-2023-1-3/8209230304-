#include<iostream>
using namespace std;
//�����¶ȵ������¶�
int F, C;
double celsius_to_fah(double cel) {
	F = cel * 9 / 5 + 32;
	cout << cel << "  " << F << "  ";
	return 0;
}
//�����¶ȵ������¶�
double fahrenheit_to_cels(double fah){
	C = (fah -32) * 5 / 9;
	cout << fah << "  " << C << "  ";
	return 0;
}