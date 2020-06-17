#include <iostream>
using namespace std;
int main() {
	int vect[6];
	for (int i = 0; i < 6; i++) cin >> vect[i];
	int temp;
	for (int y = 0; y < 6; y++) {
		for (int x = y + 1; x < 6; x++) {
			if (vect[y] < vect[x]) {
				temp = vect[x];
				vect[x] = vect[y];
				vect[y] = temp;
			}
		}
	}

	for (int i = 0; i < 6; i++) cout << vect[i];

	return 0;
}