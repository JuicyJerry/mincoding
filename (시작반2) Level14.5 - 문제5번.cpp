#include <iostream>
using namespace std;
int main() {
	char chr[6], chr1[6];
	int len = 0, len1 = 0;
	cin >> chr;
	cin >> chr1;

	for (int i = 0; i < 6; i++) {
		if (chr[i] == '\0') len = i;
		if (chr1[i] == '\0') len1 = i;
	}

	char temp;
	for (int y = 0; y < len; y++) {
		for (int x = y + 1; x < len; x++) {
			if (chr[y] > chr[x]) {
				temp = chr[x];
				chr[x] = chr[y];
				chr[y] = temp;
			}
		}
	}
	cout << chr;

	char temp1;
	for (int y = 0; y < len1; y++) {
		for (int x = y + 1; x < len1; x++) {
			if (chr1[y] > chr1[x]) {
				temp1 = chr1[x];
				chr1[x] = chr1[y];
				chr1[y] = temp1;
			}
		}
	}
	cout << chr1;

	return 0;
}