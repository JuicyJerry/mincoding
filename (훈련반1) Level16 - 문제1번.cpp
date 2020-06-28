#include <iostream>
using namespace std;
void findLength(char vect[3][10], int len0, int len1, int len2) {
	int y, x;
	for (y = 0; y < 3; y++) {
		for (x = 0; x < 10; x++) {
			if (vect[0][x] == '\0') {
				len0 = x;
				break;
			}
		}
	}
	for (y = 0; y < 3; y++) {
		for (x = 0; x < 10; x++) {
			if (vect[1][x] == '\0') {
				len1 = x;
				break;
			}
		}
	}
	for (y = 0; y < 3; y++) {
		for (x = 0; x < 10; x++) {
			if (vect[2][x] == '\0') {
				len2 = x;
				break;
			}
		}
	}
	cout << vect[0][len0 - 1];
	cout << vect[1][len1 - 1];
	cout << vect[2][len2 - 1];
}
int main() {
	char vect[3][10] = { '\0' };
	for (int i = 0; i < 3; i++) {
		cin >> vect[i];
	}
	int len0 = 0;
	int len1 = 0;
	int len2 = 0;
	findLength(vect, len0, len1, len2);




	return 0;
}