#include <iostream>
using namespace std;
void isExist(char vect[2][7], char* i, char* j, int* flag, int* flag1) {
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 7; x++) {
			if (vect[y][x] == *i) {
				*flag = 1;
				break;
			}
		}
		if (*flag == 1) break;
	}

	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 7; x++) {
			if (vect[y][x] == *j) {
				*flag1 = 1;
				break;
			}
		}
		if (*flag1 == 1) break;
	}
}

int main() {
	char vect[2][7] = {
		"A79TKQ", "MINCOD"
	};
	char i, j;
	cin >> i >> j;
	int flag = 0;
	int flag1 = 0;

	isExist(vect, &i, &j, &flag, &flag1);

	if (flag == 1) {
		cout << i << " : 존재\n";
	}
	else if (flag == 0) {
		cout << i << " : 없음\n";
	}
	if (flag1 == 1) {
		cout << j << " : 존재\n";
	}
	else if (flag1 == 0) {
		cout << j << " : 없음\n";
	}

	return 0;
}