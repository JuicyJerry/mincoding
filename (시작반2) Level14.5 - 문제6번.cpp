#include <iostream>
using namespace std;
void output(int vect[3][3]) {
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			if (vect[y][x] == '\0') cout << " ";
			else cout << vect[y][x];
		}
		cout << endl;
	}
}

void magic(int vect[3][3]) {
	int input;
	cin >> input;
	for (int y = 0; y < 3; y++) {
		for (int x = y; x < 3; x++) {
			vect[y][x] = input + 1;
			input++;
		}
	}
}
int main() {
	int vect[3][3] = { '\0' };
	magic(vect);
	output(vect);

	return 0;
}
