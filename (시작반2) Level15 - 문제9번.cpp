#include <iostream>
using namespace std;
int main() {
	char chr[3][10] = { "BBQWORLD", "KFAPPLE", "LOT" };
	char input;
	cin >> input;

	int len[3] = { 0 };
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 9; x++) {
			if (chr[y][x] == '\0') {
				len[y] = x;
				break;
			}
		}
	}

	int cnt = 0;
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < len[y]; x++) {
			if (chr[y][x] == input) cnt++;
		}
	}

	cout << cnt;

	return 0;
}