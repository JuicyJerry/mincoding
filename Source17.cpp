#include <iostream>
using namespace std;
int main() {
	int vect[3][3] = { 0 };
	int i, j, q;
	cin >> i >> j >> q;

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			vect[i][j] = q;
		}
	}
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			cout << vect[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}
