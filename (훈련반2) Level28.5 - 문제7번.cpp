#include <iostream>
using namespace std;
int main()
{
	char vect[4][3] =
	{
		3, 5, 1,
		3, 1, 2,
		3, 4, 6,
		5, 4, 6
	};

	int dat[10] = { 0 };

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			dat[vect[i][j]]++;
		}
	}

	for (int i = 0; i < 10; i++) {
		if (dat[i] >= 1) {
			cout << (i) << " ";
			for (int j = 0; j < dat[i]; j++) {
				cout << "* ";
			}
			cout << endl;
		}
	}


	return 0;
}