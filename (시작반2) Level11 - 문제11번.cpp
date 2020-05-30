#include <iostream>
using namespace std;
int vect[4][4] = {
	1, 3, 6, 2,
	4, 2, 4, 5,
	6, 3, 7, 3,
	1, 5, 4, 6
};

int main() {
	int input;
	int select[16];
	cin >> input;
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			if (vect[y][x] > input) select[16] = vect[y][x];
		}
	}

	for (int i = 0; i < 16; i++) cout << select[i];

	return 0;
}