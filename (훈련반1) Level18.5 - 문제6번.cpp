#include <iostream>
using namespace std;

int win[2][3] = { 3, 5, 1, 4, 2, 6 };
int people[4];
int dat[10] = { 0 };
int isExist(int t) {
	for (int i = 0; i < 10; i++) {
		if (people[t] == i && dat[i] >= 2) return 1;
	}
	return 0;
}
int main() {
	for (int i = 0; i < 4; i++) {
		cin >> people[i];
	}
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 3; x++) {
			dat[win[y][x]]++;
		}
	}

	for (int i = 0; i < 4; i++) {
		dat[people[i]]++;
	}

	for (int i = 0; i < 4; i++) {
		int ret = isExist(i);
		if (ret == 1) {
			cout << people[i] << "번 " << "합격\n";
		}
		else cout << people[i] << "번 " << "불합격\n";
	}
	return 0;
}