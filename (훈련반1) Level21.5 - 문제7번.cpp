#include <iostream>
using namespace std;

int direct[4][2] =
{
	-1, 0,
	1, 0,
	0, 1,
	0, -1
};

// 0: white, 1: black, #: nothing
char map[7][8] =
{
	"#######",
	"##0#0##",
	"#01#10#",
	"##010##",
	"##10#0#",
	"#00####",
	"#######"
};

int main()
{
	int dy, dx;
	int y, x;
	cin >> y >> x;
	map[y][x] = '0';
	int realCnt = 0;

	for (int y = 0; y < 7; y++)
	{
		for (int x = 0; x < 7; x++)
		{
			int cnt = 0;
			for (int t = 0; t < 4; t++)
			{
				dy = y + direct[t][0];
				dx = x + direct[t][1];

				if (dy < 0 || dx < 0 || dx > 6 || dy > 6) continue;
				else if (map[dy][dx] != '0') break;
				else cnt++;

				if (cnt == 4)
				{
					cnt = 0;
					realCnt++;
				}
			}
		}
	}

	cout << realCnt;
	return 0;
}