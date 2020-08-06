#include <iostream>
using namespace std;
int main()
{
	char map[4][4];
	for (int y = 0; y < 4; y++)
	{
		cin >> map[y];
	}

	int cnt = 0;
	for (int x = 0; x < 4; x++)
	{
		for (int y = 3; y >= 0; y--)
		{
			if (map[y][x] >= 'A' && map[y][x] < 'Z') cnt++;
		}
		cout << cnt << " ";
		cnt = 0;
	}

	return 0;
}