#include <iostream>
using namespace std;
int main() {
	int vect[3][3];
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			cin >> vect[y][x];
		}
	}
	int sum = 0;
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < y + 1; x++) sum += vect[y][x];
	}
	cout << sum;

	return 0;
}