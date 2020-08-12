#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char vect[4][11];
	int max = -999;
	int m0;
	for (int y = 0; y < 4; y++)
	{
		cin >> vect[y];
		int len = strlen(vect[y]);
		if (len > max)
		{
			max = len;
			m0 = y;
		}
	}

	int min = 999;
	int m1;
	for (int y = 0; y < 4; y++)
	{
		int len = strlen(vect[y]);
		if (len < min)
		{
			min = len;
			m1 = y;
		}
	}
	int len = strlen(vect[m0]);
	int len1 = strlen(vect[m1]);
	for (int i = 0; i < len; i++)
	{
		vect[m0][i] = vect[m0][i] + 32;
	}
	for (int i = 0; i < len1; i++)
	{
		vect[m1][i] = vect[m1][i] + 32;
	}

	for (int y = 0; y < 4; y++)
	{
		cout << vect[y] << '\n';
	}

	return 0;
}