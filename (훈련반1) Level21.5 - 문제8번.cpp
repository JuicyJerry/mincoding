#include <iostream>
#include <cstring>
using namespace std;

int p, q, dy, dx, d1, d2, flag;
int ret1, ret2, ret3, ret4;

char map[5][4] = { "___", "___", "ATK", "___", "___" };
int direct[4][2] =
{
	-1, 0,
	1, 0,
	0, -1,
	0, 1
};

void findModel(char model)
{
	for (int y = 0; y < 5; y++)
	{
		flag = 0;
		for (int x = 0; x < 3; x++)
		{
			if (map[y][x] == model)
			{
				p = y;
				q = x;
				flag = 1;
				break;
			}
		}
		if (flag == 1) break;
	}
}

void setDirection(char move[6])
{

	if (ret1 == 0)
	{
		d1 = direct[0][0];
		d2 = direct[0][1];
	}
	else if (ret2 == 0)
	{
		d1 = direct[1][0];
		d2 = direct[1][1];
	}
	else if (ret3 == 0)
	{
		d1 = direct[2][0];
		d2 = direct[2][1];
	}
	else if (ret4 == 0)
	{
		d1 = direct[3][0];
		d2 = direct[3][1];
	}
}

int main()
{
	char model, move[7];

	for (int i = 0; i < 7; i++)
	{
		cin >> model >> move;


		ret1 = strcmp(move, "UP");
		ret2 = strcmp(move, "DOWN");
		ret3 = strcmp(move, "LEFT");
		ret4 = strcmp(move, "RIGHT");

		findModel(model);
		setDirection(move);

		map[p + d1][q + d2] = map[p][q];
		map[p][q] = '_';

		// dy = p + d1;
		// dx = q + d2;

	}

	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cout << map[y][x];
		}
		cout << endl;
	}

	return 0;
}