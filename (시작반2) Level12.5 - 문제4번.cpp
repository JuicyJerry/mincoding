#include <iostream>
using namespace std;

int main() {
	int vect[5][5] = { 0 };
	int num;
	cin >> num;

	for (int i = 0; i < 5; i++) {
		vect[i][0] = num;
		vect[0][i] = num;
		vect[i][4] = num;
		vect[4][i] = num;
	}

	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 5; x++) {
			if (vect[y][x] == 0) cout << '_';
			else cout << vect[y][x];
		}
		cout << endl;
	}

	return 0;
}