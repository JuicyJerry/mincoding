#include <iostream>
using namespace std;
int main() {
	int vect[2][3];
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 3; x++) {
			cin >> vect[y][x];
		}
	}
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 3; x++) {
			if (vect[y][x] == 0) cout << '#';
			else if (vect[y][x] != 0) cout << vect[y][x];
		}
		cout << endl;
	}

	return 0;
}