#include <iostream>
using namespace std;
int main() {
	int bit[7];
	for (int i = 0; i < 7; i++) {
		cin >> bit[i];
	}
	int vect[7] = { 3, 5, 4, 2, 6, 6, 5 };

	for (int i = 0; i < 7; i++) {
		if (bit[i] == 1) {
			cout << 7;
		}
		else cout << bit[i];

	}

	return 0;
}