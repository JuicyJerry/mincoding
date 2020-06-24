#include <iostream>
using namespace std;
int main() {
	int vect[3][4] = {
		12, 11, 10, 9,
		8, 7, 6, 5,
		4, 3, 2, 1
	};
	int num;
	cin >> num;

	if (num == 1) {
		for (int i = 0; i < 4; i++) {
			vect[0][i] = 7;
		}
	}
	else if (num == 2) {
		for (int i = 0; i < 4; i++) {
			vect[1][i] = 7;
		}
	}
	else if (num == 3) {
		for (int i = 0; i < 4; i++) {
			vect[2][i] = 7;
		}
	}

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			cout << vect[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}