#include <iostream>
using namespace std;
void getLength(char vect[6], int& len) {
	for (int y = 0; y < 6; y++) {
		if (vect[y] == '\0') {
			len = y;
			break;
		}
	}

}

void inputValue(char vect[6], int len, int n) {
	char temp;
	for (int y = len; y > n; y--) {
		temp = vect[y];
		vect[y] = vect[y - 1];
		vect[y - 1] = temp;
	}
	vect[n] = 'A';
}

int main() {
	int n;
	char vect[6];
	cin >> vect;
	cin >> n;
	int len = 0;
	getLength(vect, len);
	inputValue(vect, len, n);
	for (int y = 0; y <= len; y++) {
		cout << vect[y];
	}
	return 0;
}