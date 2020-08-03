#include <iostream>
using namespace std;
int main()
{
	//int castle[4][4] =
	//{
	//	0, 0, 0, 0,
	//	0, 1, 1, 0,
	//	2, 2, 3, 0,
	//	1, 3, 3, 1
	//};

	int castle[4][4];
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cin >> castle[y][x];
		}
	}

	int flag = 0;
	for (int x = 0; x < 4; x++)
	{
		for (int y = 3; y >= 0; y--)
		{
			if (y < 0 || y > 3 || x < 0 || x > 3) continue;
			if (castle[y - 1][x] > castle[y][x])
			{
				cout << "안전하지않은성";
				flag = 1;
				break;
			}
		}
		if (flag == 1) break;
	}

	if (flag == 0) cout << "안전한성";


	return 0;
}