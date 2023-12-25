#include<iostream>
using namespace std;
class stu {
public:
	stu(int a, int b) {
		ID = a;
		mark = b;
	}
	int ID;
	int mark;
};
void max(stu*StuP[]) {
	int x = StuP[0]->mark;
	int id;
	for (int i = 1; i < 5; i++) {
		(StuP[i]->mark > x) ? (x = StuP[i]->mark, id = i + 1) : x;
	}
	cout << "成绩最高者的学号为：" << id << endl;
}
stu Stu[5] = {
		stu(1,89),
		stu(2,92),
		stu(3,81),
		stu(4,76),
		stu(5,85) };
int main() {
	stu* Stup[5] = { Stu + 0,Stu + 1,Stu + 2,Stu + 3,Stu + 4 };
	max(Stup);
}