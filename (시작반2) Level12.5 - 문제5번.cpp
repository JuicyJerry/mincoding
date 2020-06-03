#include <iostream>
using namespace std;
int main() {
	int vect[5][5] = {
		4, 5, 4, 5, 4,
		8, 9, 8, 9, 8,
		1, 2, 1, 2, 1,
		4, 5, 4, 5, 4,
		6, 7, 6, 7, 6
	};

	int x, y;
	for (int i = 0; i < 5; i++) {
		cin >> y >> x;
		vect[y][x]++;
		vect[y][x] = vect[y][x] % 10;
	}

	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 5; x++) {
			cout << (int)(vect[y][x]);
		}
		cout << endl;
	}

	return 0;
}