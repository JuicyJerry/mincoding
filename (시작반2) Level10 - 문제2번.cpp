#include <iostream>
using namespace std;
int vect[4][4];

int main() {
	int num;
	int t = 0;
	cin >> num;
	if (num % 2 == 0) {
		for (int y = 0; y < 4; y++) {
			vect[y][t] = (t + 1);
			t++;
		}
	}

	else if (num % 2 != 0) {
		for (int x = 3; x >= 0; x--) {
			vect[t][x] = (t + 1);
			t++;
		}
	}

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			cout << vect[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}