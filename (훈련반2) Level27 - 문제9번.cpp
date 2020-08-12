#include <iostream>
using namespace std;
int main()
{
	char map[4][4];
	int direct[8][2] = { 1, 0, -1, 0, 0, 1, 0, -1, -1, -1, -1, 1, 1, 1, 1, -1 };
	int y, x;
	for (int i = 0; i < 3; i++)
	{
		cin >> y >> x;
		map[y][x] = '#';
	}
	int dy, dx;
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (map[y][x] == '#')
			{
				for (int t = 0; t < 8; t++)
				{
					dy = y + direct[t][0];
					dx = x + direct[t][1];
					if (dy < 0 || dx < 0 || dy > 3 || dx > 3) continue;

					map[dy][dx] = '@';
				}
			}
		}
	}

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (map[y][x] != '#' && map[y][x] != '@') cout << "_";
			else cout << map[y][x];
		}
		cout << endl;
	}

	return 0;
}