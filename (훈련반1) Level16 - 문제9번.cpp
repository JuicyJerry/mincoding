#include <iostream>
using namespace std;
int main() {
	int vect[6];
	for (int i = 0; i < 6; i++) {
		cin >> vect[i];
	}

	for (int i = 1; i < 6; i++) {
		vect[i] = vect[i - 1] + vect[i];
	}

	for (int i = 0; i < 6; i++) {
		cout << vect[i] << " ";
	}

	return 0;
}