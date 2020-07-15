#include <iostream>
using namespace std;

int j, i;
int sum = 0;
int sumMax = 0;
int maxY = 0;
int maxX = 0;

int map[4][5] =
{
	3, 5, 4, 2, 5,
	3, 3, 3, 2, 1,
	3, 2, 6, 7, 8,
	9, 1, 1, 3, 2
};

void isPattern(int dy, int dx)
{
	sum = 0;

	for (int y = 0; y < j; y++) {
		for (int x = 0; x < i; x++) {
			sum += map[y + dy][x + dx];
			if (y + dy < 0 || y + dy > 4 - j || x + dx < 0 || x + dx > 5 - i) continue;
			if (sum > sumMax) {
				sumMax = sum;
				maxY = y + dy;
				maxX = x + dx;
			}
		}
	}
}

int main()
{
	cin >> j >> i;

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 5; x++) {
			isPattern(y, x);
		}
	}
	cout << "(" << maxY << "," << maxX << ")";

	return 0;
}