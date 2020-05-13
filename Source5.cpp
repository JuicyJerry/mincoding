#include <iostream>
using namespace std;
int vect[3][4];
int i;

void input() {
	cin >> i;
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			vect[y][x] = i;
			i++;
		}
	}
}

void process() {
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			vect[y][x] = vect[y][x] + 1;
		}
	}
}

void output() {
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			cout << vect[y][x] << " ";
		}
		cout << endl;
	}

}

int main() {
	input();
	process();
	output();

	return 0;
}