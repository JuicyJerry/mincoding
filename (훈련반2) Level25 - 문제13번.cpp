#include <iostream>
using namespace std;
int main()
{
	int Number[6];
	char Command[7];
	for (int i = 0; i < 6; i++)
	{
		cin >> Number[i];
	}
	cin >> Command;

	int max = -999;
	int min = 999;
	int index = 0;

	for (int i = 0; i < 6; i++)
	{
		if (Command[i] == 'm')
		{
			for (int j = 0; j < 6; j++)
			{
				if (Number[j] == 999999) continue;
				if (Number[j] < min)
				{
					min = Number[j];
					index = j;
				}
			}
			cout << min;
			Number[index] = 999999;
			min = 999;
		}
		else
		{
			for (int j = 0; j < 6; j++)
			{
				if (Number[j] == 999999) continue;
				if (Number[j] > max)
				{
					max = Number[j];
					index = j;
				}
			}
			cout << max;
			Number[index] = 999999;
			max = -999;
		}
	}
	return 0;
}