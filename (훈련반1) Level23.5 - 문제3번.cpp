#include <iostream>
using namespace std;
int main()
{
	int sum;
	int map[4][4];
	int y, x;
	for (y = 0; y < 3; y++)
	{
		sum = 0;
		for (x = 0; x < 3; x++)
		{
			cin >> map[y][x];
			sum += map[y][x];
		}
		map[y][3] = sum;
	}

	for (x = 0; x < 3; x++)
	{
		sum = 0;
		for (y = 0; y < 3; y++)
		{
			sum += map[y][x];
		}
		map[3][x] = sum;
	}

	map[3][3] = map[0][0] + map[1][1] + map[2][2];

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