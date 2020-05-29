#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	cin >> num1 >> num2;

	int vect[6][3] = {
		10, 16, 22,
		11, 17, 23,
		12, 18, 24,
		13, 19, 25,
		14, 20, 26,
		15, 21, 27
	};
	for (int j = num1; j <= num2; j++) {
		for (int i = 0; i < 3; i++) {
			vect[j][i] = 7;
		}
	}

	for (int y = 0; y < 6; y++) {
		for (int x = 0; x < 3; x++) {
			cout << vect[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}