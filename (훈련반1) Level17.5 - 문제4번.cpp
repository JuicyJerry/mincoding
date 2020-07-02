#include <iostream>
using namespace std;
int isExist(int map[2][3], int pix[2][2], int t) {
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 3; x++) {
			if (map[y][x] == pix[y][t]) return 1;
		}
		t++;
	}
	return 0;
}

int main() {
	int map[2][3] = {
		3, 55, 42,
		-5, -9, -10
	};

	int pix[2][2];
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 2; x++) {
			cin >> pix[y][x];
		}
	}
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 2; x++) {
			if (isExist(map, pix, y) == 1) cout << "Y ";
			else cout << "N ";
		}
		cout << endl;
	}
	return 0;
}