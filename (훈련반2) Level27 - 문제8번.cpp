#include <iostream>
using namespace std;
int main()
{
	int vect[3][3];
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cin >> vect[y][x];
		}
	}

	int max = -999;
	int m0, m1;
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (vect[y][x] > max)
			{
				max = vect[y][x];
				m0 = y;
				m1 = x;
			}
		}
	}
	vect[m0][m1] = -999;
	cout << "ù��°:" << max << "(" << m0 << "," << m1 << ")" << endl;

	max = -999;
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (vect[y][x] > max)
			{
				max = vect[y][x];
				m0 = y;
				m1 = x;
				vect[y][x] = NULL;
			}
		}
	}
	cout << "�ι�°:" << max << "(" << m0 << "," << m1 << ")" << endl;




	return 0;
}