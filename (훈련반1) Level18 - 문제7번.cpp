#include <iostream>
using namespace std;

int train[8] = { 3, 7, 6, 4, 2, 9, 1, 7 };
int team[3];

int whereIsMyTeam(int y)
{
	for (int t = 0; t < 8; t++)
	{
		if (train[t] == team[y]) return t;
	}
	return 0;
}

int main()
{
	for (int y = 0; y < 3; y++)
	{
		cin >> team[y];
	}

	for (int y = 0; y < 3; y++)
	{
		int ret = whereIsMyTeam(y);
		if (y == 0 && ret > 0) cout << ret << "번~";
		if (y == 2 && ret > 0) cout << ret << "번 칸";

	}


	return 0;
}