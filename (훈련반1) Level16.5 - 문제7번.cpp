
#include <iostream>
using namespace std;

int main() {
	int vect[7][4];
	int t = 1;
	for (int y = 0; y < 7; y++) {
		for (int x = 0; x < 4; x++) {
			vect[y][x] = t;
			t++;
		}
	}

	int i, j, p;
	cin >> i >> j >> p;

	for (int x = 0; x < 4; x++) {
		vect[i][x] = 0;
		vect[j][x] = 0;
		vect[p][x] = 0;
	}

	for (int y = 0; y < 7; y++) {
		for (int x = 0; x < 4; x++) {
			cout << vect[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}