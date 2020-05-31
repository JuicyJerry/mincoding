#include <iostream>
using namespace std;
int main() {
	char vect[9] = { 0 };
	for (int i = 0; i < 8; i++) {
		cin >> vect[i];
	}
	char big[9] = { 0 };
	char small[9] = { 0 };
	int t = 0;
	int j = 0;

	for (int i = 0; i < 8; i++) {
		if (vect[i] >= 'A' && vect[i] <= 'Z') {
			big[t] = vect[i];
			t++;
		}
	}

	for (int i = 0; i < 8; i++) {
		if (vect[i] >= 'a' && vect[i] <= 'z') {
			small[j] = vect[i];
			j++;
		}
	}

	cout << "big=" << big << endl;
	cout << "small=" << small;


	return 0;
}

