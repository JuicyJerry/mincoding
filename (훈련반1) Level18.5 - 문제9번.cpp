#include <iostream>
using namespace std;

int main() {
	char vect[11];
	cin >> vect;
	int dat[91] = { 0 };

	for (int i = 0; i < 10; i++) {
		dat[vect[i]]++;
	}


	for (int i = 65; i < 91; i++) {
		if (dat[i] > 0) {
			cout << (char)(i);
		}
	}

	return 0;
}