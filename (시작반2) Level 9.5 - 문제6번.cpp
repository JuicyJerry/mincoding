#include <iostream>
using namespace std;
int main() {
	int vect[3][3] = {
		3, 5, 14,
		2, 3, 9,
		6, 2, 7
	};

	int input;
	cin >> input;
	int cnt = 0;

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			if (vect[y][x] % input == 0) {
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}