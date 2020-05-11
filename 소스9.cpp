#include <iostream>
using namespace std;
int main() {
	int vect[5];
	for (int i = 0; i < 5; i++) {
		cin >> vect[i];
	}

	for (int i = 0; i < 5; i++) {
		if (vect[i] >= 70) {
			cout << i + 1 << "번사람은" << vect[i] << "점PASS" << endl;
		}
		else if (vect[i] >= 50) {
			cout << i + 1 << "번사람은" << vect[i] << "점RETEST" << endl;
		}
		else {
			cout << i + 1 << "번사람은" << vect[i] << "점FAIL" << endl;
		}
	}
		return 0;
	}