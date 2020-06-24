#include <iostream>
using namespace std;
int main() {
	int vect[4][4] = { 0 };
	int t;
	cin >> t;
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			vect[y][x] = t;
			t++;
		}
	}

	for (int y = 0; y < 4; y++) {
		if (y % 2 == 0) {
			for (int x = 0; x < 4; x++) {
				cout << vect[y][x] << " ";
			}
		}
		else if (y % 2 != 0) {
			for (int x = 3; x >= 0; x--) {
				cout << vect[y][x] << " ";
			}
		}
		cout << endl;
	}


	return 0;
}
