#include <iostream>
using namespace std;

int main() {
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	int vect[3][4];
	for (int i = 0; i < 4; i++) {
		vect[0][i] = num1;
		num1++;
	}
	for (int i = 0; i < 4; i++) {
		vect[1][i] = num2;
		num2++;
	}
	for (int i = 0; i < 4; i++) {
		vect[2][i] = num3;
		num3++;
	}

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			cout << vect[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}