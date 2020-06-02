#include <iostream>
using namespace std;
int main() {
	char vect[3][3] = { 0 };
	char chr;
	cin >> chr;
	int t = 1;
	int x, y;

	if (chr >= '0' && chr <= '9') {
		for (x = 2; x >= 0; x--) {
			for (y = 2; y >= x; y--) {
				vect[x][y] = t;
				t++;
			}
		}
	}

	int q = 1;
	if (chr >= 'A' && chr <= 'Z') {
		for (y = 2; y >= 0; y--) {
			for (x = 0; x <= y; x++) {
				vect[y][x] = q;
				q++;
			}
		}
	}

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			if (vect[y][x] == 0) cout << ' ';
			else cout << (int)(vect[y][x]);
		}
		cout << endl;
	}


	return 0;
}
