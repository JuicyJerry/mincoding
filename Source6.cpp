#include <iostream>
using namespace std;
char chr;
char x;

void input() {
	cin >> x;
}

void output() {
	char vect1[5] = { 'B', 'D', '5', 'Q', 'A' };
	char vect2[5] = { 'Q', 'E', 'R', 'E', 'F' };

	if (x >= 'a' && x <= 'z') {
		for (int y = 0; y < 5; y++) {
			cout << vect1[y];
		}
	}
	else if (x >= 'A' && x <= 'Z') {
		for (int x = 0; x < 5; x++) {
			cout << vect2[x];
		}
	}

	else if (x >= '0' && x <= '9') {
		for (char chr = 'H'; chr >= 'A'; chr--) {
			cout << chr;
		}
	}
}

int main() {
	input();
	output();

	return 0;
}