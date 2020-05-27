#include <iostream>
using namespace std;
char vect[2][3];
int cnt1 = 0;
int cnt2 = 0;
void input() {
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 3; x++) {
			cin >> vect[y][x];
		}
	}
}

void findUpper() {
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 3; x++) {
			if (vect[y][x] >= 'A' && vect[y][x] <= 'Z') {
				cnt1++;
			}
		}
	}
}
void findLower() {
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 3; x++) {
			if (vect[y][x] >= 'a' && vect[y][x] <= 'z') {
				cnt2++;
			}
		}
	}
}

int main() {
	input();
	findUpper();
	findLower();

	cout << "대문자" << cnt1 << "개" << endl;
	cout << "소문자" << cnt2 << "개";


	return 0;
}