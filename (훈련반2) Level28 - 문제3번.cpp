#include <iostream>
using namespace std;

int map[7][7];

int n;

void run(int now)
{
	cout << now << " ";
	for (int i = 0; i < 7; i++)
	{
		if (map[now][i] == 1)
		{
			run(i);
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
	run(0);

	return 0;
}