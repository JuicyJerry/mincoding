#include <iostream>
#include <cstring>
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
	char vect[3][11];
	int max = -999;
	int maxIndex;

	cin >> vect[0];
	cin >> vect[1];
	cin >> vect[2];


	for (int i = 0; i < 3; i++)
	{
		int len = strlen(vect[i]);
		if (len > max)
		{
			max = len;
			maxIndex = i;
		}
	}

	char temp[11];
	strcpy_s(temp, vect[maxIndex]);
	strcpy_s(vect[maxIndex], vect[0]);
	strcpy_s(vect[0], temp);

	for (int y = 0; y < 3; y++)
	{
		cout << vect[y] << endl;
	}

	return 0;
}