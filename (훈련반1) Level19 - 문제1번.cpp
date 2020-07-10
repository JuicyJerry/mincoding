#include <iostream>
using namespace std;

int main() {
	int vect[3][3] =
	{
		3, 5, 4,
		1, 1, 2,
		1, 3, 9
	};

	int y, x;
	cin >> y >> x;

	int direct[4][2] =
	{
		1, 0,
		0, 1,
		-1, 0,
		0, -1
	};

	int dy, dx;
	int sum = 0;
	for (int t = 0; t <= 4; t++) {
		dy = y + direct[t][0];
		dx = x + direct[t][1];

		if (dy >= 0 && dy <= 3 && dx >= 0 && dx <= 3) {
			sum += vect[dy][dx];
		}
	}
	cout << sum;

	return 0;
}