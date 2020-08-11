#include <iostream>
using namespace std;
int main()
{
	int map[4][4];
	int direct[4][2] = { -1, 0, 1, 0, 0, -1, 0, 1 };
	int dy, dx;
	int flag = 0;

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cin >> map[y][x];
		}
	}

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (map[y][x] == 1)
			{
				for (int t = 0; t < 4; t++)
				{

					dy = y + direct[t][0];
					dx = x + direct[t][1];

					if (dy < 0 || dx < 0 || dy > 3 || dx > 3) continue;
					if (map[y][x] == 1 && map[dy][dx] == 1)
					{
						flag = 1;
						break;
					}
				}
			}
			if (flag == 1) break;
		}
		if (flag == 1) break;
	}

	if (flag == 1) cout << "위험한 상태";
	else if (flag == 0) cout << "안전한 상태";

	return 0;
}