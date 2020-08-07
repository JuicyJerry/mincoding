#include <iostream>
using namespace std;
int image[4][4];

int rectSum(int j, int i)
{
	int sum = 0;
	for (int y = j; y < j + 2; y++)
	{
		for (int x = i; x < j + 3; x++)
		{
			sum += image[y][x];
		}
	}
	return sum;
}

int main()
{
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cin >> image[y][x];
		}
	}

	int max = -999;
	int yMaxIndex, xMaxIndex;
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			int ret = rectSum(y, x);
			if (ret > max)
			{
				max = ret;
				yMaxIndex = y;
				xMaxIndex = x;
			}
		}
	}

	cout << "(" << yMaxIndex << "," << xMaxIndex << ")";
	return 0;
}