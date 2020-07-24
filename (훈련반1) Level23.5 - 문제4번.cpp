#include <iostream>
using namespace std;
int main()
{
	int vect[3][4] =
	{
		3, 5, 4, 1,
		1, 1, 2, 3,
		6, 7, 1, 2
	};

	int temp[4];
	for (int i = 0; i < 4; i++)
	{
		cin >> temp[i];
	}

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (vect[y][x] == temp[0]) vect[y][x] = temp[1];
			else if (vect[y][x] == temp[1]) vect[y][x] = temp[2];
			else if (vect[y][x] == temp[2]) vect[y][x] = temp[3];
			else if (vect[y][x] == temp[3]) vect[y][x] = temp[0];
		}
	}

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cout << vect[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}