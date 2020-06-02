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

	char a, b;
	int c, d, e;
	int f, g, h, i, j;
	int n = 0;

	cin >> a >> b;
	for (int j = 0; j < 4; j++) {
		cin >> vect[a + n][b + n];
		vect[a + n][b + n]++;
		if (vect[a][b] == 10) vect[a][b] = 0;
		n++;
	}

	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 5; x++) {
			cout << (int)(vect[y][x]);
		}
		cout << endl;
	}

	return 0;
}