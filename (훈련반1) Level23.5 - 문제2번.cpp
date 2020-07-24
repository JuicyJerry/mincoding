#include <iostream>
using namespace std;
char map[3][4];
int y, x;

int safetyOrNot()
{
	int cnt;
	int flag = 0;
	for (int y = 0; y < 3; y++)
	{
		cnt = 0;
		for (int x = 0; x < 4; x++)
		{
			if (map[y][x] == '#') cnt++;
			if (cnt >= 2) {
				return 1;
			}
		}
	}


	for (int x = 0; x < 3; x++)
	{
		cnt = 0;
		for (int y = 0; y < 4; y++)
		{
			if (map[y][x] == '#') cnt++;
			if (cnt >= 2) {
				return 1;
			}
		}
	}
	return 0;
}
int main()
{
	for (int i = 0; i < 3; i++)
	{
		cin >> y >> x;
		map[y][x] = '#';
	}

	int ret = safetyOrNot();
	if (ret == 1) cout << "위험";
	else cout << "안전";

	return 0;
}