#include <iostream>
using namespace std;
int main() {
	int vect[4] = { 3, 5, 4 ,2 };
	int bit[4];
	for (int i = 0; i < 4; i++) {
		cin >> bit[i];
	}

	int sum = 0;
	for (int i = 0; i < 4; i++) {
		if (bit[i] == 1) {
			sum += vect[i];
		}
	}
	cout << sum;

	return 0;
}