#include <iostream>
using namespace std;
int main() {
	int num1;
	char chr;
	cin >> num1 >> chr;

	int	vect[5][5] = { 0 };
	for (int x = 4; x >= 0; x--) {
		vect[num1 - 1][x] = chr;
		chr++;
	}

	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 5; x++) {
			cout << vect[y][x];
		}
		cout << endl;
	}

	return 0;
}