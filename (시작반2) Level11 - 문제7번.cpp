#include <iostream>
using namespace std;

int main() {
	int vect[7];

	for (int i = 0; i < 7; i++) {
		cin >> vect[i];
	}
	int max = 0;
	int min = 99999;

	for (int i = 0; i < 7; i++) {
		if (vect[i] > max) max = vect[i];
		if (vect[i] < min) min = vect[i];
	}
	cout << "MAX=" << max << endl;
	cout << "MIN=" << min << endl;

	return 0;
}