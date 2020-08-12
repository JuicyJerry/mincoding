#include <iostream>
using namespace std;
int main()
{
	int map[5][5] =
	{
		0, 1, 7, 2, 0,
		0, 0, 8, 0, 5,
		0, 0, 0, 3, 6,
		0, 0, 0, 0, 0,
		0, 0, 0, 0, 0
	};

	int j, i;
	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			if (map[y][x] > 0)
			{
				j = y;
				i = x;
				cout << (char)(j + 'A') << " " << (char)(i + 'A') << " " << map[y][x] << endl;
			}
		}
	}


	return 0;
}