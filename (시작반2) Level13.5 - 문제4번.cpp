#include <iostream>
using namespace std;
int main() {
	int vect[4][4] = {
		3, 4, 1, 6,
		3, 5, 3, 6,
		'\0', '\0', '\0', '\0',
		5, 4, 6, 0
	};

	for (int i = 0; i < 4; i++)	cin >> vect[2][i];
	int max = 0;
	int min = 99999;
	int max_y, max_x, min_y, min_x;
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			if (vect[y][x] > max) {
				max = vect[y][x];
				max_y = y;
				max_x = x;
			}
			if (vect[y][x] < min) {
				min = vect[y][x];
				min_y = y;
				min_x = x;
			}
		}
	}

	cout << "MAX=" << max << "(" << max_y << "," << max_x << ")\n";
	cout << "MIN=" << min << "(" << min_y << "," << min_x << ")\n";

	return 0;
}