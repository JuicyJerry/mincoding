#include <iostream>
using namespace std;

int main() {
	int vect[4][4] =
	{
		0, 0, 0, 1,
		1, 1, 0, 1,
		1, 0, 0, 1,
		1, 1, 1, 1
	};
	int vect1[4][4] =
	{
		1, 1, 1, 1,
		1, 0, 1, 1,
		1, 0, 0, 0,
		1, 0, 0, 0
	};

	int result[4][4] = { 0 };

	int dy = 0;
	int dx = 0;
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			result[y][x] = vect[y][x] + vect1[y][x];
		}
	}

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			if (result[y][x] == 0) {
				cout << "(" << y << "," << x << ")\n";
			}
		}
	}

	return 0;
}

