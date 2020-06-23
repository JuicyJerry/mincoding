#include <iostream>
using namespace std;
int main() {
	char chr[5][11];
	for (int i = 0; i < 5; i++) cin >> chr[i];
	int length[5] = { 0 };

	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 10; x++) {
			if (chr[y][x] == '\0') {
				length[y] = x;
				break;
			}
		}
	}

	int max = -1;
	int t;
	for (int i = 0; i < 5; i++) {
		if (length[i] > max) {
			max = length[i];
			t = i;
		}
	}

	cout << chr[t];

	return 0;
}