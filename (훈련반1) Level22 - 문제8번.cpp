#include <iostream>
using namespace std;
int vect[3][2][2] = { {{2, 4}, {1, 5}}, {{2, 3}, {3, 6}}, {{7, 3}, {1, 5}} };
int main()
{
	int max = -9999;
	int min = 9999;
	int input;
	cin >> input;

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			if (vect[input][y][x] > max) max = vect[input][y][x];
			if (vect[input][y][x] < min) min = vect[input][y][x];
		}
	}

	cout << "MAX=" << max << endl;
	cout << "MIN=" << min;
	return 0;
}