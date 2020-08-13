#include <iostream>
using namespace std;

int cube[3][3] = { 0 };

void rolling0()
{
	cube[0][1] = 5;
	cube[0][2] = 4;
	cube[1][0] = 3;
	cube[2][2] = 1;
}

void rolling1()
{
	cube[0][1] = 3;
	cube[1][2] = 5;
	cube[2][0] = 1;
	cube[2][2] = 4;
}
void rolling2()
{
	cube[0][0] = 1;
	cube[1][2] = 3;
	cube[2][0] = 4;
	cube[2][1] = 5;
}
void rolling3()
{
	cube[0][0] = 4;
	cube[0][2] = 1;
	cube[1][0] = 5;
	cube[2][1] = 3;
}

void init()
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cube[y][x] = 0;
		}
	}
}

int main()
{
	int cnt = 0;
	int n;
	cin >> n;
	if (cnt == 0) rolling0();

	for (int i = 0; i < n; i++)
	{
		cnt++;
		init();
		if (cnt == 1) rolling1();
		else if (cnt == 2) rolling2();
		else if (cnt == 3) rolling3();
		if (cnt == 4) cnt = 0;
	}

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (cube[y][x] == 0) cout << '_';
			else cout << cube[y][x];
		}
		cout << endl;
	}


	return 0;
}