#include <iostream>
using namespace std;
int a, b;
int vect[3][2][3];

int main()
{
	cin >> a >> b;
	for (int z = 0; z < 3; z++) {
		for (int y = 0; y < 2; y++) {
			for (int x = 0; x < 3; x++) {
				if (y == 1) vect[z][y][x] = b;
				else vect[z][y][x] = a;
			}
		}
	}

	for (int z = 0; z < 3; z++) {
		for (int y = 0; y < 2; y++) {
			for (int x = 0; x < 3; x++) {
				cout << vect[z][y][x] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}



	return 0;
}