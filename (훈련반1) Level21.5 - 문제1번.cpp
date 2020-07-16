#include <iostream>
using namespace std;
int main()
{
	char map[4][4];
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 3; x++) {
			cin >> map[y][x];
		}
	}
	int distance = 0;
	int dy1, dx1;
	int dy2, dx2;
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 3; x++) {
			if (map[y][x] == 'A') {
				// 1, 1
				dy1 = y;
				dx1 = x;
			}
			if (map[y][x] == 'B') {
				// 3, 2
				dy2 = y;
				dx2 = x;
			}
		}
	}
	if (dy2 > dy1) {
		cout << (dy2 - dy1) + (dx2 - dx1);
	}
	else {
		cout << (dy1 - dy2) + (dx1 - dx2);
	}

	return 0;
}