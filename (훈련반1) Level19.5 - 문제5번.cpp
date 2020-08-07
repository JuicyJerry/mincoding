#include <iostream>
using namespace std;

struct sketchbook
{
	char image[3][3] = { '\0' };
};

int p = 0;
char temp[9];
sketchbook t;

void isExist(int j, int i)
{
	for (int y = 0; y < 9; y++)
	{
		if (t.image[j][i] == temp[y]) break;
		else if (t.image[j][i] != temp[y])
		{
			if (t.image[j][i] == temp[y])
				temp[p] = t.image[j][i];
			p++;
			break;
		}
	}
}

int main()
{
	for (int y = 0; y < 3; y++)
	{
		cin >> t.image[y];
	}

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			isExist(y, x);
		}
	}

	cout << temp;
	return 0;
}