#include <iostream>
using namespace std;
int vect[6] = { 3, 7, 4, 1, 2, 6 };
int univer[2][2];

int isExist(int y, int x)
{
	for (int t = 0; t < 6; t++)
	{
		if (univer[y][x] == vect[t])
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			cin >> univer[y][x];
		}
	}

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			int ret = isExist(y, x);
			if (ret == 1) cout << "OK ";
			else cout << "NO ";
		}
		cout << endl;
	}
	return 0;
}