#include <iostream>
using namespace std;
int vect[5] = { 3, 5, 1, 9, 7 };
char direction;
int backup;

void LEFT()
{
	backup = vect[0];

	for (int i = 0; i < 5; i++)
	{
		vect[i] = vect[i + 1];
	}
	vect[4] = backup;
}

void RIGHT()
{
	backup = vect[4];

	for (int i = 4; i > 0; i--)
	{
		vect[i] = vect[i - 1];
	}
	vect[0] = backup;
}

int main()
{
	for (int i = 0; i < 4; i++)
	{
		cin >> direction;
		if (direction == 'L') LEFT();
		else if (direction == 'R') RIGHT();
	}

	for (int i = 0; i < 5; i++)
	{
		cout << vect[i] << " ";
	}

	return 0;
}