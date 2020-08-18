#include <iostream>
using namespace std;

int map[8][8] =
{
	0, 1, 1, 1, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 1, 1, 1, 0,
	0, 0, 0, 0, 0, 0, 0, 1,
};

char value[9] = "ABHCDGEF";

int main()
{
	char chr;
	int parent;
	cin >> chr;
	int flag = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (map[i][j] == 1 && value[j] == chr)
			{
				flag = 1;
				parent = i;
				break;
			}
		}
		if (flag == 1) break;
	}

	if (flag == 0)
	{
		cout << "없음";
		return 0;
	}
	if (flag == 1)
	{
		flag = 0;
		for (int j = 0; j < 8; j++)
		{
			if (map[parent][j] == 1)
			{
				if (value[j] == chr) continue;
				cout << value[j] << " ";
			}
		}
	}
	else
	{
		cout << "없음";;
	}

	return 0;
}