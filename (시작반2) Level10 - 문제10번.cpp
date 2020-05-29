#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	int vect[3][4] = { 0 };
	int  t = 1;
	for (int y = 2; y >= 0; y--) {
		for (int x = 3; x >= 0; x--) {
			vect[y][x] = t;
			t++;
		}
	}
	for (int i = 0; i < 3; i++) vect[i][num] = 0;

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			cout << vect[y][x] << " ";
		}
		cout << endl;
	}
	return 0;
}