#include <iostream>
using namespace std;

int map[10][10];
int n;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> map[i][j];
		}
	}

	cout << "boss:";
	for (int i = 0; i < n; i++)
	{
		if (map[i][0] == 1)
			cout << i;
	}

	cout << "\nunder:";
	for (int i = 0; i < n; i++)
	{
		if (map[0][i] == 1)
			cout << i << " ";
	}


	return 0;
}