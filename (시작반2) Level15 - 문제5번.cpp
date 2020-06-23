#include <iostream>
using namespace std;
int main() {
	char vect[4][7];
	int length[4];
	for (int y = 0; y < 4; y++) cin >> vect[y];

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 7; x++) {
			if (vect[y][x] == '\0') {
				length[y] = x;
				break;
			}
		}
	}

	int temp;
	for (int j = 0; j < 4; j++) {
		for (int i = j + 1; i < 4; i++) {
			if (length[j] > length[i]) {
				temp = length[j];
				length[j] = length[i];
				length[i] = temp;
			}
		}
	}

	for (int i = 0; i < 4; i++) cout << length[i] << " ";

	return 0;
}