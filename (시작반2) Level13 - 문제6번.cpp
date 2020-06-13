#include <iostream>
using namespace std;
int vect[2][6] = {
	4, 5, 6, 1, 3, 1,
	2, 1, 3, 6, 3, 6
};

void Output(int* a, int* b, int* c, int* cnt1, int* cnt2, int* cnt3) {
	cout << *a << "=" << *cnt1 << "°³" << endl;
	cout << *b << "=" << *cnt2 << "°³" << endl;
	cout << *c << "=" << *cnt3 << "°³" << endl;
}

void Process(int* a, int* b, int* c) {
	int cnt1 = 0, cnt2 = 0, cnt3 = 0;
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 6; x++) {
			if (vect[y][x] == *a) cnt1++;
			else if (vect[y][x] == *b) cnt2++;
			else if (vect[y][x] == *c) cnt3++;
		}
	}
	Output(&*a, &*b, &*c, &cnt1, &cnt2, &cnt3);
}

void Input() {
	int a, b, c;
	cin >> a >> b >> c;
	Process(&a, &b, &c);
}

int main() {
	Input();

	return 0;
}