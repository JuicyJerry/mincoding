#include <iostream>
using namespace std;
int main() {
	int vect[3][3] = { 0 };
	int n;
	cin >> n;
	for (int y = 0; y < 3; y++) {
		for (int x = 2 - y; x <= 2; x++) {
			vect[y][x] = n;
			n++;
		}
	}

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			cout << vect[y][x];
		}
		cout << endl;
	}

	return 0;
}