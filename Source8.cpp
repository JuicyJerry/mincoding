#include <iostream>
using namespace std;
int vect[2][3];
int sum = 0;

void input() {
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 3; x++) {
			cin >> vect[y][x];
		}
	}
}
void process() {
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 3; x++) {
			sum += vect[y][x];
		}
	}
}

void output() {
	cout << sum;
}

int main() {
	input();
	process();
	output();

	return 0;
}