#include <iostream>
using namespace std;

int map[3][3] = { 3, 5, 1, 3, 8, 1, 1, 1, 5 };
int bitarray[2][2];
int sum = 0, m0, m1;

void masking(int* j, int* i)
{
	sum = 0;
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			if (bitarray[y][x] == 1)
			{
				sum += map[*j + y][*i + x];
			}
			else return;
		}
	}
}


int main()
{
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			cin >> bitarray[y][x];
		}
	}

	int maxx = 0;
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			masking(&y, &x);
			if (sum > maxx)
			{
				maxx = sum;
				m0 = y;
				m1 = x;
			}
		}
	}

	cout << "(" << m0 << "," << m1 << ")";

	return 0;
}