#include <iostream>
using namespace std;
int map[5][5] =
{
	3, 3, 5, 3, 1,
	2, 2, 4, 2, 6,
	4, 9, 2, 3, 4,
	1, 1, 1, 1, 1,
	3, 3, 5, 9, 2
};

int direct[4][2] =
{
	-1, -1,
	-1, 1,
	1, -1,
	1, 1
};


int sum(int y, int x)
{
	int dy, dx;
	int maxSum = 0;
	for (int t = 0; t < 4; t++) {
		dy = y + direct[t][0];
		dx = x + direct[t][1];
		if (dy < 1 && dy >4 && dx < 1 && dx > 4) continue;

		maxSum += map[dy][dx];
	}
	return maxSum;
}

int main() {
	int max = 0;
	int y, x;
	int maxYindex;
	int maxXindex;
	for (y = 1; y < 5; y++) {
		for (x = 1; x < 5; x++) {
			if (sum(y, x) > max) {
				max = sum(y, x);
				maxYindex = y;
				maxXindex = x;
			}
		}
	}
	cout << maxYindex << " " << maxXindex;



	return 0;
}