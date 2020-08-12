#include <iostream>
using namespace std;

struct sketchbook
{
	char image[3][3];
};


int main()
{
	int vect[100] = { 0 };
	sketchbook t;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> t.image[i][j];
			vect[t.image[i][j]] = 1;
		}
	}
	for (int i = 'A'; i <= 'Z'; i++)
	{
		if (vect[i] == 1)
		{
			cout << (char)i;
		}
	}


	return 0;
}