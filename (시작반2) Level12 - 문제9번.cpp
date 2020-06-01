#include <iostream>
using namespace std;
int main() {
	int vect[3][3] = { 0 };
	char chr;
	cin >> chr;
	int t = 1;
	int q = 2;
	if (chr >= '0' && chr <= '9') {
		for (int y = 2; y >= 0; y--) {
			for (int x = 2; x >= q; x++) {
				vect[y][x] = t;
				t++;
			}
			q--;
		}
	}

	int r = 2;
	int p = 1;
	if (chr >= 'A' && chr <= 'Z') {
		for (int x = 0; x <= r; x++) {
			for (int y = 2; y >= 0; y++) {
				vect[x][y] = p;
				p++;
			}
			r--;
		}
	}


	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			cout << vect[y][x];
		}
	}

	return 0;
}