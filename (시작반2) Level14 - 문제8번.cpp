#include <iostream>
using namespace std;
int main() {
	char vect[10] = { '\0' };
	int len = 0;
	cin >> vect;
	for (int i = 0; i < 10; i++) {
		if (vect[i] == '\0') {
			len = i;
			break;
		}
	}
	int temp;
	for (int y = 0; y < len; y++) {
		for (int x = y + 1; x < len; x++) {
			if (vect[y] > vect[x]) {
				temp = vect[y];
				vect[y] = vect[x];
				vect[x] = temp;
			}
		}
	}

	cout << vect;

	return 0;
}