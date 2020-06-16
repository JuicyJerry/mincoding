#include <iostream>
using namespace std;
char vect[2][7] = { "457132", "DFQWGZ" };
int main() {
	char chr;
	int i, j;
	cin >> chr;
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 6; x++) {
			if (vect[y][x] == chr) {
				j = y;
				i = x;
				break;
			}
		}
	}
	cout << vect[j + 1][i];

	return 0;
}