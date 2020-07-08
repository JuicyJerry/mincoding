#include <iostream>
using namespace std;
int main() {
	char vect[10] = "ATKPTCABC";
	char i, j;
	cin >> i >> j;
	int a = 0;
	int b = 0;
	for (int x = 0; x < 10; x++) {
		if (vect[x] == i) {
			a = x;
			break;
		}
	}
	for (int x = 9; x >= 0; x--) {
		if (vect[x] == j) {
			b = x;
			break;
		}
	}

	cout << (int)(b - a);



	return 0;
}