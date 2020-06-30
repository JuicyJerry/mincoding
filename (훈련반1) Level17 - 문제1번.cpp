#include <iostream>
using namespace std;
int main() {
	char vect[3][5] = { "ATKB", "CZFD", "HGEI" };
	char input;
	cin >> input;
	int y, x;
	int dx, dy;
	int offsetDy, offsetDx;
	cin >> offsetDy >> offsetDx;
	for (y = 0; y < 3; y++) {
		for (x = 0; x < 4; x++) {
			if (vect[y][x] == input) {
				cout << vect[y + offsetDy][x + offsetDx];
				break;
			}
		}
	}

	return 0;
}

