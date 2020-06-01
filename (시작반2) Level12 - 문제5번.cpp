#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	int vect[3][5] = { 0 };
	int t = 1;
	int q = 2;

	for (int y = 0; y < 3; y++) {
		for (int x = q; x < 4; x++) {
			vect[y][x] = t;
			t++;
		}
		q--;
	}

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			if (vect[y][x] == 0) vect[y][x] = char(' ');
		}
	}
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			cout << vect[y][x];
		}
		cout << endl;
	}


	return 0;
}