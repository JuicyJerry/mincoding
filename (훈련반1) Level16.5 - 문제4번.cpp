#include <iostream>
using namespace std;

int main() {
	int vect[6];
	int index0, index1;
	cin >> index0 >> index1;
	vect[0] = index0;
	vect[1] = index1;

	for (int i = 2; i < 6; i++) {
		vect[i] = vect[i - 2] * vect[i - 1];
	}
	cout << vect[5];

	return 0;
}