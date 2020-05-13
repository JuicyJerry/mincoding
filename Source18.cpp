#include <iostream>
using namespace std;
int main() {
	int vect[6][3];
	int i, j;
	cin >> i >> j;

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			vect[y][x] = i;
		}
	}
	for (int y = 3; y <= 5; y++) {
		for (int x = 0; x < 3; x++) {
			vect[y][x] = j;
		}
	}
	for (int y = 0; y <= 5; y++) {
		for (int x = 0; x < 3; x++) {
			cout << vect[y][x];
		}
		cout << endl;
	}

	return 0;
}