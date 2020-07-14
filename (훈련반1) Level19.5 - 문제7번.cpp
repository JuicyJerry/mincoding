#include <iostream>
using namespace std;
int map[3][3] =
{
	3, 5, 1,
	3, 8, 1,
	1, 1, 5
};

int bitArray[2][2];
int sum = 0;
int max = 0;
int maxYindex, maxXindex;
int isPattern(int dy, int dx)
{
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 2; x++) {
			if (bitArray[y][x] == map[y + dy][x + dx]) {
				sum += map[y][x];
			}
		}
	}
	return sum;

}

int main() {

	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 2; x++) {
			cin >> bitArray[y][x];
		}
	}

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			int sum = isPattern(y, x);
			if (sum > max) {
				max = sum;
				maxYindex = y;
				maxXindex = x;
			}
		}
	}
	cout << "(" << maxYindex << "," << maxXindex << ")";

	return 0;
}