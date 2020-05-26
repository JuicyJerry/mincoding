#include <iostream>
using namespace std;
int main() {
	int vect[6][2];
	int x, y, temp;
	int cnt = 0;

	for (int y = 0; y < 6; y++) {
		for (int x = 0; x < 2; x++) {
			cin >> vect[y][x];
		}
	}

	for (int y = 0; y < 6; y++) {
		if (vect[y][0] < vect[y][1]) {
			temp = vect[y][0];
			vect[y][0] = vect[y][1];
			vect[y][1] = temp;
			cnt++;
		}
	}

	for (int y = 0; y < 6; y++) {
		for (int x = 0; x < 2; x++) {
			cout << vect[y][x] << " ";
		}
		cout << endl;
	}
	cout << cnt << "Έν";

	return 0;
}