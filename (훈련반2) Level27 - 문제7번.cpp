#include <iostream>
using namespace std;
int main()
{
	int vect[3][4] = { 0 };
	vect[1][0] = 1;
	vect[2][0] = 1;

	for (int i = 0; i < 4; i++)
	{
		cin >> vect[0][i];
	}

	int direct[2][2] = { 0, -1, -1, 0 };
	int dy, dx;
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if ((y == 1 && vect[y][x] == 0) || (y == 2 && vect[y][x] == 0))
			{
				for (int t = 0; t < 2; t++)
				{
					dy = y + direct[t][0];
					dx = x + direct[t][1];

					if (dy < 0 || dx < 0 || dy > 2 || dx > 3) continue;
					vect[y][x] += vect[dy][dx];
				}
			}
		}
	}

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cout << vect[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}