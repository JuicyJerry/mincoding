#include <iostream>
using namespace std;
int main() {
	char vect[3][5];
	char t;
	cin >> t;

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 5; x++) {
			vect[y][x] = t;
			t++;
		}
	}

	vect[2][2] = vect[2][2] + 32;
	cout << vect[2][2];

	return 0;
}