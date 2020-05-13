#include <iostream>
using namespace std;
int main() {
	char i, j;
	cin >> i >> j;
	char vect[3][6];

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			vect[y][x] = i;
		}
	}
	for (int y = 0; y < 3; y++) {
		for (int x = 4; x <= 5; x++) {
			vect[y][x] = j;
		}
	}

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 6; x++) {
			cout << vect[y][x];
		}
		cout << endl;
	}

	return 0;
}