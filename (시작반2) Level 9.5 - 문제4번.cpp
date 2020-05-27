#include <iostream>
using namespace std;
int main() {
	int vect[3][3] = {
		10, 3, 20,
		60, 30, 40,
		20, 30, 40
	};

	int input1, input2;
	cin >> input1 >> input2;
	int cnt = 0;

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			if (vect[y][x] >= input1 && vect[y][x] <= input2) {
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}