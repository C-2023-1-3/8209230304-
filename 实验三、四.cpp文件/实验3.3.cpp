#include<iostream>


using namespace std;
extern double celsius_to_fah(double cel);
extern double fahrenheit_to_cels(double fah);
int main() {
	float a = 41, b = 130;
	for (int i = 0, j = 1; ; i++) {
		if (i == 10) {
			break;
		}

		a = a - j;
		b = b - j * 10;
		celsius_to_fah(a);
		cout << "|";
		fahrenheit_to_cels(b);
		cout << endl;
	}
	return 0;
}