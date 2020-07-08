#include <iostream>
using namespace std;
int main() {
	int hipoTeeth[2][5];
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 5; x++) {
			cin >> hipoTeeth[y][x];
		}
	}

	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		if (hipoTeeth[0][i] == 1 && hipoTeeth[1][i] == 1) cnt++;
	}

	cout << cnt << "°³";

	return 0;
}