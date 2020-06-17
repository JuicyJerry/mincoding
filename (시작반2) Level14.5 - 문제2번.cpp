#include <iostream>
using namespace std;
int vect[5][5];

void shrimp(int* num) {
	if (*num == 1) {
		for (int y = 0; y < 5; y++) {
			for (int x = 0; x <= y; x++) {
				cout << vect[y][x] << " ";
			}
			cout << endl;
		}
	}
	else if (*num == 2) {
		for (int y = 0; y < 5; y++) {
			for (int x = 0; x < 5 - y; x++) {
				cout << vect[y][x] << " ";
			}
			cout << endl;
		}
	}
}

int main() {
	int num;
	cin >> num;
	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 5; x++) {
			cin >> vect[y][x];
		}
	}
	shrimp(&num);

	return 0;
}