#include <iostream>
using namespace std;
int main() {
	char chr[2][6];
	int len[2] = { 0 };
	for (int i = 0; i < 2; i++) cin >> chr[i];

	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 6; x++) {
			if (chr[y][x] == '\0') {
				len[y] = x;
				break;
			}
		}
	}
	int t = 0;
	char target[12];
	for (int i = 0; i < len[0]; i++) {
		target[t] = chr[0][i];
		t++;
	}
	for (int i = 0; i < len[1]; i++) {
		target[t] = chr[1][i];
		t++;
	}

	for (int i = 0; i < t; i++) {
		cout << target[i];
	}


	return 0;
}