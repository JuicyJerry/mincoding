#include <iostream>
using namespace std;

int map[8][8];

char name[9];

void run(int now)
{
	cout << name[now];
	for (int i = 0; i < 8; i++)
	{
		if (map[now][i] == 1)
		{
			run(i);
		}
	}

}

void input()
{
	cin >> name;
	for (int y = 0; y < 8; y++)
	{
		for (int x = 0; x < 8; x++)
		{
			cin >> map[y][x];
		}
	}
}

int main()
{
	input();
	run(0);

	return 0;
}