#include <iostream>
using namespace std;
int main() {
	int row;
	char chr;
	cin >> row >> chr;
	char vect[5][5] = { 0 };

	for (int x = 4; x >= 0; x--) {
		vect[row - 1][x] = chr;
		chr++;
	}

	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 5; x++) {
			if (vect[y][x] == 0) cout << (int)(vect[y][x]);
			else cout << (vect[y][x]);
		}
		cout << endl;
	}
	return 0;
}
