#include <iostream>
#include <cstring>
using namespace std;
int path[12];
int name[11] = { -5, -4, -3, -2, -1, 0, 2, 3, 4, 5, 6 };
char input[5];
int ret1, i;
int t = 1;
int x = 5;

void run(int level)
{
	if (level == 1)
	{
		//cout << path[0] << endl;
		return;
	}
	else if (level == -1)
	{
		//cout << path[0] << endl;
		return;
	}

	if (ret1 == 0)
	{
		path[level] = name[x += t];
		run(level + 1);
		if (i == 4)
		{
			if (path[0] == 0) cout << 1;
			else if (path[0] < 0) cout << 'B' << (-path[0]);
			else cout << path[0];
		}
		path[level] = 0;
	}
	else if (ret1 != 0)
	{
		path[level] = name[x -= t];
		run(level - 1);
		if (i == 4)
		{
			if (path[0] == 0) cout << 1;
			else if (path[0] < 0) cout << 'B' << (-path[0]);
			else cout << path[0];
		}
		path[level] = 0;
	}
}

int main()
{
	for (i = 0; i < 5; i++)
	{
		cin >> input;

		ret1 = strcmp(input, "up");
		run(0);
	}

	return 0;
}