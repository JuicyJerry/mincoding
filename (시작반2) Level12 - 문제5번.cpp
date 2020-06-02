#include <iostream>
using namespace std;
int main() {
	int n;
	int vect[3][4] = { 0 };
	cin >> n;

	for (int y = 0; y < 3; y++) {
		for (int x = 2 - y; x < 4; x++) {
			vect[y][x] = n;
			n++;
		}
	}

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			if (vect[y][x] == 0) cout << ' ';
			else cout << vect[y][x];
		}
		cout << endl;
	}

	return 0;
}
