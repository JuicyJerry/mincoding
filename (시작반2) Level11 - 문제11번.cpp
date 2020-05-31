#include <iostream>
using namespace std;
int main() {
	int vect[4][4] = {
		1, 3, 6, 2,
		4, 2, 4, 5,
		6, 3, 7, 3,
		1, 5, 4, 6
	};

	int num;
	cin >> num;
	int select[16] = { 0 };
	int t = 0;

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			if (vect[y][x] > num) {
				select[t] = vect[y][x];
				t++;
			}
		}
	}

	for (int i = 0; i < t; i++) {
		cout << select[i] << " ";
	}

	return 0;
}