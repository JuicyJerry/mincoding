#include <iostream>
using namespace std;
int vect[3][3] = {
	3, 1, 6,
	7, 8, 4,
	9, 2, 3
};

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	vect[a][b] = c;

	int max = 0;
	int min = 99999;
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			if (vect[y][x] > max) max = vect[y][x];
			if (vect[y][x] < min) min = vect[y][x];
		}
	}

	cout << max + min;

	return 0;
}