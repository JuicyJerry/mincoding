#include <iostream>
using namespace std;
int main() {
	int vect1[5] = { 3, 5, 2, 4, 1 };
	int vect2[3][2] = { {9, 8}, {7, 1}, {3, 4} };

	int i;
	cin >> i;

	if (i % 2 == 0) {
		for (int y = 0; y < 3; y++) {
			for (int x = 0; x < 2; x++) {
				cout << vect2[y][x];
			}
			cout << endl;
		}

	}
	else if (!(i % 2 == 0)) {
		for (int j = 0; j < 5; j++) {
			cout << vect1[j];
		}
	}
	return 0;
}