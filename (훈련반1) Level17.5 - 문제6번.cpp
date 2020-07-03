#include <iostream>
using namespace std;
int main() {
	int vect[3][3] = {
		3, 1, 9,
		7, 2, 1,
		1, 0, 8
	};

	int masking[3][3];
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			cin >> masking[y][x];
		}
	}

	int flag = 0;
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			if (masking[y][x] == 1) {
				if (vect[y][x] >= 3 && vect[y][x] <= 5) {
					flag = 1;
					break;
				}
			}
		}
		if (flag == 1) break;
	}

	if (flag == 1) cout << "발견";
	else cout << "미발견";

	return 0;
}