#include <iostream>
using namespace std;
int map[10][10];
int n;
char path[10];

void run(int now, int level)
{
	if (level == 2)
	{
		for (int i = 0; i < 3; i++)
		{
			cout << path[i] << " ";
		}
		cout << endl;

	}
	for (int y = 0; y < n; y++)
	{
		if (map[now][y] == 1)
		{
			path[level + 1] = y + '0';
			run(y, level + 1);
			path[level + 1] = 0;
		}
	}
}


int main()
{
	cin >> n;
	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < n; x++)
		{
			cin >> map[y][x];
		}
	}

	path[0] = 0 + '0';
	run(0, 0);

	return 0;
}