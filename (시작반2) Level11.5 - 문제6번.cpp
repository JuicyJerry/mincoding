#include <iostream>
using namespace std;
int main() {
	char vect[3][3] = {
		'a', 'b', 'E',
		'E', '2', 'W',
		'3', '2', '4'
	};

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			if (vect[y][x] >= 'a' && vect[y][x] <= 'z') cout << char(vect[y][x] - 32) << " ";
			else if (vect[y][x] >= 'A' && vect[y][x] <= 'Z') cout << char(vect[y][x] + 32) << " ";
			else if (vect[y][x] - '0' >= 0 && vect[y][x] - '0' <= 9) cout << int(vect[y][x] - '0') + 5 << " ";
		}
		cout << endl;
	}


	return 0;
}