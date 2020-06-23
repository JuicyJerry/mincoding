#include <iostream>
using namespace std;
int main() {
	char vect[2][8] = { '\0' };
	for (int y = 0; y < 2; y++) {
		cin >> vect[y];
	}
	int cnt = 0;
	for (int x = 0; x < 8; x++) {
		if (vect[0][x] != vect[1][x]) {
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}