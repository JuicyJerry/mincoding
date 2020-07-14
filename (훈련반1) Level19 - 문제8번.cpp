#include <iostream>
using namespace std;

char map[4][5] = { '\0' };

int direct[8][2] =
{
	-1, -1,
	-1, 0,
	-1, 1,
	0, -1,
	0, 1,
	1, -1,
	1, 0,
	1, 1
};

void bomb(int y, int x) {
	int dy, dx;
	for (int t = 0; t < 8; t++) {
		dy = y + direct[t][0];
		dx = x + direct[t][1];
		if (dy >= 0 && dx >= 0 && dy < 4 && dx < 5)
		{
			map[dy][dx] = '#';
		}
	}
}

int main() {
	int y, x, j, i;
	cin >> y >> x;
	cin >> j >> i;

	bomb(y, x);
	bomb(j, i);

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 5; x++) {
			if (map[y][x] == '\0') cout << "_" << " ";
			else cout << map[y][x] << " ";
		}
		cout << endl;
	}


	return 0;
}