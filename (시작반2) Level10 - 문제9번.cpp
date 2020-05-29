#include <iostream>
using namespace std;

int main() {
	int vect[4][4] = { 0 };
	int t = 1;

	for (int x = 3; x >= 0; x--) {
		for (int y = 0; y < 4; y++) {
			vect[y][x] = t;
			t++;
		}
	}

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			cout << vect[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}