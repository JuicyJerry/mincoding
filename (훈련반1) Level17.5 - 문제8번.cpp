#include <iostream>
using namespace std;
int main() {
	char vect[5][6] = {
		"ABCDE", "FGHIJ", "KLMNO", "PQRST", "UVWXY"
	};

	char input;
	cin >> input;

	int target_y, target_x;
	int input_y, input_x;
	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 5; x++) {
			if (vect[y][x] == 'M') {
				target_y = y;
				target_x = x;
				break;
			}
			if (vect[y][x] == input) {
				input_y = y;
				input_x = x;
				break;
			}
		}
	}
	cout << input_y - target_y << ',' << input_x - target_y;


	return 0;
}