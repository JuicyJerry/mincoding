#include <iostream>
using namespace std;
void CountLine(char chr[3][12]) {
	int length[3];
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 12; x++) {
			if (chr[y][x] == '\0') {
				length[y] = x;
				break;
			}
		}
	}
	for (int y = 0; y < 3; y++) {
		cout << length[y] << "=" << chr[y] << "\n";
	}
}

int main() {
	char chr[3][12];
	for (int y = 0; y < 3; y++) cin >> chr[y];
	CountLine(chr);

	return 0;
}