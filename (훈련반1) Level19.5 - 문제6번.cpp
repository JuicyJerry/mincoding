#include <iostream>
using namespace std;
char map[3][5] = { "ABGK", "TTAB", "ACCD" };
char pattern[2][2];
int realCnt = 0;

void isPattern(int dy, int dx) {
	int y, x;
	int	cnt = 0;
	for (y = 0; y < 2; y++) {
		for (x = 0; x < 2; x++) {
			if (pattern[y][x] == map[dy + y][dx + x]) cnt++;
		}
		if (y >= 1 && x >= 1 && cnt == 4)  realCnt++;
	}
}

int main() {
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 2; x++) {
			cin >> pattern[y][x];
		}
	}
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 5; x++) {
			isPattern(y, x);
		}
	}

	int debug = 0;

	if (realCnt > 0)  cout << "발견(" << realCnt << "개)";
	else  cout << "미발견";

	return 0;
}