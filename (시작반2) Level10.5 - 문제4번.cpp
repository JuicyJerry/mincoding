#include <iostream>
using namespace std;
int vect[3][5] = {
	'D', 'A', 'C', 'C', 'D',
	'S', 'D', 'F', 'A', 'E',
	'E', 'E', 'T', 'J', 'H'
};

int INPUT(int value) {
	char chr;
	cin >> chr;
	int check = CHECK(chr);
	cout << check;

	if (value == 1) cout << "있음";
	else cout << "없음";
}

void CHECK(char chr) {
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 5; x++) {
			if (vect[y][x] == chr) return INPUT(1);
			else return INPUT(0);
		}
	}
}

int main() {
	INPUT(0);


	return 0;
}