#include <iostream>
using namespace std;
int main() {
	char vect[6][3];
	char t = 'A';
	for (int x = 2; x >= 0; x--) {
		for (int y = 5; y >= 0; y--) {
			vect[y][x] = t;
			t++;
		}
	}
	int y, x;
	cin >> y >> x;
	cout << vect[y][x];

	return 0;
}