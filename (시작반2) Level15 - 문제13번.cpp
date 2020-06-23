#include <iostream>
using namespace std;
int main() {
	char chr[2][6] = { "DATAW", "BBQK" };
	int n;
	cin >> n;

	int len[2] = { 0 };
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 6; x++) {
			if (chr[y][x] == '\0') {
				len[y] = x;
				break;
			}
		}
	}
	char temp;
	if (n % 2 != 0) {
		for (int y = 0; y < len[0]; y++) {
			for (int x = y; x < len[0]; x++) {
				if (chr[0][y] > chr[0][x]) {
					temp = chr[0][y];
					chr[0][y] = chr[0][x];
					chr[0][x] = temp;
				}
			}
		}
	}
	else if (n % 2 == 0) {
		for (int y = 0; y < len[1]; y++) {
			for (int x = y; x < len[1]; x++) {
				if (chr[1][y] > chr[1][x]) {
					temp = chr[1][y];
					chr[1][y] = chr[1][x];
					chr[1][x] = temp;
				}
			}
		}
	}


	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < len[y]; x++) {
			cout << chr[y][x];
		}
		cout << endl;
	}

	return 0;
}