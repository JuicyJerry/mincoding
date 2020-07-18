#include <iostream>
using namespace std;
int main()
{
	// empty : 0, white : 1, black: 2
	int map[7][7] =
	{
		0, 0, 1, 0, 1, 0, 0,
		0, 1, 2, 0, 2, 1, 0,
		0, 0, 1, 2, 1, 0, 0,
		0, 0, 2, 1, 0, 1, 0,
		0, 1, 1, 0, 0, 0, 0,
		0, 1, 1, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0
	};

	int direct[4][2] =
	{
		-1, 0,
		1, 0,
		0, -1,
		0, 1
	};
	int dy, dx;


	for (int j = 0; j < 7; j++) {
		for (int i = 0; i < 7; i++) {
			for (int t = 0; t < 4; t++) {
				dy = y + direct[t][0];
				dx = x + direct[t][1];
				if (map[dy][dx] == 1) cnt++;
			}
		}
	}

	return 0;
}