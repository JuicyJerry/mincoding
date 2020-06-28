#include <iostream>
using namespace std;
int main() {
	char vect[4][5] = {
		"ABKT",
		"KFCF",
		"BBQQ",
		"TPZF"
	};
	char v, v1;
	cin >> v >> v1;
	int cnt = 0;
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			if (vect[y][x] == v || vect[y][x] == v1) {
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}