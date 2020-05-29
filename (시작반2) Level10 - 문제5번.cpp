#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	int vect[3][3] = { 0 };
	int t = 1;
	if (num % 5 == 1) {
		for (int x = 2; x >= 0; x--) {
			for (int y = 2; y >= 0; y--) {
				vect[y][x] = t;
				t++;
			}
		}
	}
	else if (num % 5 == 2) {
		for (int y = 2; y >= 0; y--) {
			for (int x = 0; x < 3; x++) {
				vect[y][x] = t;
				t++;
			}
		}
	}
	else {
		for (int x = 0; x < 3; x++) {
			for (int y = 0; y < 3; y++) {
				vect[y][x] = t + 9;
				t++;
			}
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
