#include <iostream>
using namespace std;
int main() {
	char chr;
	cin >> chr;
	char target[3][3] = { '\0' };

	// y: 2 -> 0, x : 0 -> 2;
	int y, x;
	y = 2;
	while (y >= 0) {
		x = 0;
		while (x <= 2 - y) {
			target[y][x] = chr;
			chr++;
			x++;
		}
		y--;
	}
	int j = 0;
	while (j < 3) {
		int i = 0;
		while (i < 3) {
			if (target[j][i] == '\0') cout << " ";
			else cout << target[j][i];
			i++;
		}
		cout << endl;
		j++;
	}

	return 0;
}
