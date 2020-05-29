#include <iostream>
using namespace std;
int num;
int vect[3][3];

void run() {
	int t = 1;

	if (num < 10) {
		for (int y = 0; y < 3; y++) {
			for (int x = 0; x < 3; x++) {
				vect[y][x] = t;
				t++;
			}
		}
	}
	else {
		for (int y = 0; y < 3; y++) {
			for (int x = 2; x >= 0; x--) {
				vect[y][x] = t;
				t++;
			}
		}
	}
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			cout << vect[y][x];
		}
		cout << endl;
	}
}

int main() {
	cin >> num;
	run();

	return 0;
}