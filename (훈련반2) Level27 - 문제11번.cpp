#include <iostream>
using namespace std;
int map[4][4];
int y, x;
int dy, dx;
int direct[4][2] = { -1, 0, 1, 0, 0, 1, 0, -1 };

void getNumber(int i)
{
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (map[y][x] == i)
			{
				for (int t = 0; t < 4; t++)
				{
					dy = y + direct[t][0];
					dx = x + direct[t][1];
					if (map[dy][dx] < i && map[dy][dx] > 0) continue;
					if (dy < 0 || dx < 0 || dy > 3 || dx > 3) continue;
					map[dy][dx] = i + 1;
				}
			}
		}
	}
}

int main()
{

	cin >> y >> x;
	map[y][x] = 1;

	for (int i = 1; i <= 5; i++)
	{
		getNumber(i);
	}

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cout << map[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}