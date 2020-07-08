#include <iostream>
using namespace std;
int main() {
	char vect[10];
	cin >> vect;

	int dat[91] = { 0 };
	for (int i = 0; i < 10; i++) {
		dat[vect[i]]++;
	}
	int idx = 0;
	char value;
	for (int i = 65; i < 91; i++) {
		if (dat[i] > idx) {
			idx = dat[i];
			value = i;
		}
	}

	cout << value;

	return 0;
}