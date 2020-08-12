#include <iostream>
using namespace std;

int map[5][4];

void setLine(int y)
{
	int t = 0;
	for (int q = y - t; q > 0; q--)
	{
		for (int z = 0; z < 4; z++)
		{
			if ((y - t) == 0)
			{
				map[y][z] = { 0 };
				return;
			}
			map[y - t][z] = map[y - (t + 1)][z];
		}
		t++;
	}
}

int main()
{
	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cin >> map[y][x];
		}
	}

	int cnt = 0;
	for (int y = 4; y >= 0; y--)
	{
		cnt = 0;
		for (int x = 0; x < 4; x++)
		{
			if (map[y][x] == 1)
			{
				cnt++;
			}

			if (cnt == 4)
			{
				setLine(y);
				y = 4;
			}
		}
	}

	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cout << map[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}