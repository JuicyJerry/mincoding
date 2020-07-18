#include <iostream>
using namespace std;
int main()
{
	int vect[4][3] =
	{
		1, 5, 3,
		4, 5, 5,
		3, 3, 5,
		4, 6, 2
	};

	int a, b;
	cin >> a >> b;

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 3; x++) {
			if (vect[y][x] >= a && vect[y][x] <= b) cout << '#' << " ";
			else cout << vect[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}