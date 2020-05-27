#include <iostream>
using namespace std;
int main() {
	int vect[5][3] = {
		'D', 'A', 'A',
		'B', 'C', 'D',
		'E', 'F', 'A',
		'A', 'A', 'D',
		'F', 'G', 'E'
	};

	char input;
	cin >> input;

	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 3; x++) {
			if (vect[y][x] == input) {
				cout << "(" << y << "," << x << ")" << endl;
			}
		}
	}

	return 0;
}