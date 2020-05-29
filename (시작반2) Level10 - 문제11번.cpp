#include <iostream>
using namespace std;
int main() {
	int vect[4][4] = { 0 };
	int input;
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			cin >> input;
			vect[y][x] = input;

		}
	}

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			if (vect[y][x] == 0) vect[y][x] = '!';
			else if (vect[y][x] % 2 == 0) vect[y][x] = '#';
			else if (vect[y][x] % 2 != 0) vect[y][x] = '@';
		}
	}

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			cout << (char)(vect[y][x]);
		}
		cout << endl;
	}

	return 0;
}