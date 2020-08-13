#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;
int main()
{
	char vect[3][10];
	int firstVectIndex = 0;
	for (int y = 0; y < 3; y++)
	{
		cin >> vect[y];
	}

	int len1 = strlen(vect[0]);
	int len2 = strlen(vect[1]);
	int len3 = strlen(vect[2]);

	char temp[10];
	if (len2 > len1 && len2 > len3)
	{
		strcpy_s(temp, vect[1]);
		strcpy_s(vect[1], vect[0]);
		strcpy_s(vect[0], temp);
	}
	else if (len3 > len2 && len3 > len1)
	{
		strcpy_s(temp, vect[3]);
		strcpy_s(vect[3], vect[0]);
		strcpy_s(vect[0], temp);
	}

	for (int y = 0; y < 3; y++)
	{
		cout << vect[y];
		cout << endl;
	}

	return 0;
}