#include <iostream>
#include<string.h>
#include"student.h"            
using namespace std;
void Student::display()         
{
    cout << "num£º" << num << endl;
    cout << "name£º" << name << endl;
    cout << "sex£º" << sex << endl;
}
void Student::set_value(int a, char c) {
	num = a;
	strncpy_s(name, "tcg", 4);
	sex = c;
}