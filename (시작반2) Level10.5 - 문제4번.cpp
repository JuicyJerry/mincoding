#include <iostream>
using namespace std;
char vect[3][5] = {
	'D', 'A', 'C', 'C', 'D',
	'S', 'D', 'F', 'A', 'E',
	'E', 'E', 'T', 'J', 'H'
};

int CHECK(char value) {
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 5; x++) {
			if (vect[y][x] == value) return 1;
		}
	}
	return 0;
}

void INPUT() {
	char chr;
	cin >> chr;
	if (CHECK(chr) == 1) cout << "있음";
	else cout << "없음";
}

int main() {
	INPUT();

	return 0;
}