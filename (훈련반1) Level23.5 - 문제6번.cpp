#include <iostream>
using namespace std;

char v1[4][4];
char v2[4][5] = { "ABCD", "BBAB", "CBAC", "BAAA" };
int result[80] = { 0 };

void getCounting()
{
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (v1[y][x] != v2[y][x]) continue;
			else
			{
				result[v1[y][x]]++;
			}
		}
	}
}

int main()
{
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cin >> v1[y][x];
		}
	}

	getCounting();

	int max = -9999;
	int maxChar;
	for (int y = 0; y < 80; y++)
	{
		if (result[y] > max)
		{
			max = result[y];
			maxChar = y;
		}
	}

	cout << (char)(maxChar);

	return 0;
}