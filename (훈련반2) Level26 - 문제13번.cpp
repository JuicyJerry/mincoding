#include <iostream>
using namespace std;

int A[3][3] = { 2, 6, 3, 7, 1, 1, 3, 4, 2 };
int B[2][4] = { 6, 4, 2, 4, 1, 1, 5, 8 };
int C[2][3] = { 9, 2, 3, 4, 2, 1 };
int C1[2][3] = { 9, 2, 3, 4, 2, 1 };
int member[3][3] = { 0 };
int m0 = -999;
int n0 = 999;
int mY, mX, nY, nX;
int t = 0;

void aSet()
{
	m0 = -999;
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (A[y][x] > m0) {
				m0 = A[y][x];
				mY = y;
				mX = x;
			}
		}
	}
	member[0][t] = m0;
	A[mY][mX] = -999;
	t++;
}

int p = 0;
void bSet()
{
	n0 = 999;
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (B[y][x] < n0) {
				n0 = B[y][x];
				nY = y;
				nX = x;
			}
		}
	}
	member[1][p] = n0;
	B[nY][nX] = 999;
	p++;
}

int q = 0;
void cSet()
{
	m0 = -999;
	n0 = 999;
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (C[y][x] < n0)
			{
				n0 = C[y][x];
				mY = y;
				mX = x;
			}
		}
	}
	member[2][q] = n0;
	C[mY][mX] = 999;
	q++;
}
void cSet1()
{
	m0 = -999;
	n0 = 999;
	if (q == 2)
	{
		for (int y = 0; y < 2; y++)
		{
			for (int x = 0; x < 3; x++)
			{
				if (C1[y][x] > m0) {
					m0 = C[y][x];
					nY = y;
					nX = x;
				}
			}
		}
		member[2][q] = m0;
		C[nY][nX] = -999;
		if (q == 2) return;
	}
}

int main()
{
	for (int i = 0; i < 3; i++)
	{
		aSet();
		bSet();
		if (q == 2)
		{
			cSet1();
			break;
		}
		cSet();
	}


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << member[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}