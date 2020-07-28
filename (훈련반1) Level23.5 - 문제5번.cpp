#include <iostream>
using namespace std;
int vect[8];
int a, b, pivot, temp, flag;

int firstValue(int i)
{
	if (vect[i] > pivot) return vect[i];
	else return 0;
}

int secondValue(int i)
{
	if (vect[i] < pivot) return vect[i];
	else return 0;
}

int main()
{
	flag = 0;
	for (int i = 0; i < 8; i++)
	{
		cin >> vect[i];
	}

	pivot = vect[0];


	for (int t = 0; t < 8; t++)
	{
		int i, j;


		for (i = 1; i < 8; i++)
		{
			a = firstValue(i);
			if (a != 0) break;
		}


		for (j = 7; j >= 0; j--)
		{
			b = secondValue(j);
			if (b != 0) break;
		}

		if (j < i)
		{
			temp = vect[j];
			vect[j] = vect[0];
			vect[0] = temp;
			flag = 1;
			break;
		}
		else
		{
			temp = vect[j];
			vect[j] = vect[i];
			vect[i] = temp;
		}

		if (flag == 1) break;
	}


	for (int i = 0; i < 8; i++)
	{
		cout << vect[i] << " ";
	}


	return 0;
}