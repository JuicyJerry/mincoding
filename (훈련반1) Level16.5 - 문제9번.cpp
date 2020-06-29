
#include <iostream>
using namespace std;

int main() {
	int i, j;
	char chr;
	cin >> i >> j >> chr;
	char vect[10][10];

	for (int z = 0; z < 2; z++) {
		for (int y = 0; y < i; y++) {
			for (int x = 0; x < j; x++) {
				cout << chr;
			}
			cout << endl;
		}
		cout << endl;

	}

	return 0;
}