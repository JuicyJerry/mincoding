#include <iostream>
using namespace std;

int main() {
	char vect[8];
	for (int i = 0; i < 8; i++) cin >> vect[i];

	char big[8];
	for (int i = 0; i < 8; i++) {
		if (vect[i] >= 'A' && vect[i] <= 'Z') big[i] = vect[i];
	}

	char small[8];
	for (int i = 0; i < 8; i++) {
		if (vect[i] >= 'a' && vect[i] <= 'z') small[i] = vect[i];
	}


	cout << "big=";
	cout << big << endl;

	cout << "small=";
	cout << small << endl;

	return 0;
}