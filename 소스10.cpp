#include <iostream>
using namespace std;
char x, vect[4][4];

void input() {
	cin >> x;
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			vect[y][x] = x;
		}
	}
}
void output() {
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			cout << vect[y][x];
		}
		cout << endl;
	}
}
int main() {
	input();
	output();
	return 0;
}
