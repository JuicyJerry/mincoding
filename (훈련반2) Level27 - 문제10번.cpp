#include <iostream>
using namespace std;
int main()
{
	int map[4][4];
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cin >> map[y][x];
		}
	}
	int max = -99;
	int maxIndex;
	int cnt = 0;
	for (int y = 0; y < 4; y++)
	{
		cnt = 0;
		for (int x = 0; x < 4; x++)
		{
			if (map[y][x] == 1) cnt++;
		}
		if (cnt > max)
		{
			max = cnt;
			maxIndex = y;
		}
	}

	cout << (char)(maxIndex + 65);
	return 0;
}