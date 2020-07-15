#include <iostream>
using namespace std;
int main() {
	char vect[11];
	cin >> vect;
	int len = 0;
	for (int y = 0; y < 10; y++) {
		if (vect[y] == '\0') {
			len = y;
			break;
		}
	}

	for (int y = 0; y < len; y++) {
		for (int x = 0; x < (y + 1); x++) {
			cout << vect[x];
		}
		cout << endl;
	}

	return 0;
}