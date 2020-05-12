#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	int vect1[3][5];
	int vect2[3][3];

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 5; x++) {
			vect1[y][x] = num;
		}
	}
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			vect2[y][x] = num;
		}
	}
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 5; x++) {
			cout << vect1[y][x];
		}
		cout << endl;
	}
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			cout << vect2[y][x];
		}
		cout << endl;
	}
}
