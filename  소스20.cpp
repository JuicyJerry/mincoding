#include <iostream>
using namespace std;
int main() {
	int vect[3][2];

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 2; x++) {
			cin >> vect[y][x];
			vect[y][x] = vect[y][x] + 2;
		}
	}
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 2; x++) {
			cout << vect[y][x] << " ";
		}
		cout << endl;
	}
}