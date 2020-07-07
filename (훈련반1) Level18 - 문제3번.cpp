#include <iostream>
using namespace std;
int main() {
	int vect[3][3] = { 0 };
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			cin >> vect[y][x];
		}
	}

	int dat[10] = { 0 };
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			dat[vect[y][x]]++;
		}
	}

	for (int i = 1; i < 10; i++) {
		if (dat[i] == 0) cout << i << " ";
	}

	return 0;

}