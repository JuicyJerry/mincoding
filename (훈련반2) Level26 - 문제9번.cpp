#include <iostream>
using namespace std;
int main()
{
	int map[4][4] =
	{
		3, 5, 1, 4,
		2, 2, 1, 1,
		0, 1, 2, 3,
		3, 1, 3, 1
	};

	char t;
	cin >> t;

	if (t >= '0' && t <= '9')
	{
		for (int x = 0; x < 4; x++)
		{
			cout << map[t - 48][x];
		}
	}
	else if (t >= 'A' && t <= 'Z')
	{
		for (int x = 0; x < 4; x++)
		{
			cout << map[x][t - 'A'];
		}
	}


	return 0;
}