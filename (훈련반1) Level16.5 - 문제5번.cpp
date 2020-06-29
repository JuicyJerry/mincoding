#include <iostream>
using namespace std;

int main() {
	char vect[100];
	cin >> vect;
	char a, b;
	cin >> a >> b;
	for (int i = 0; i < 100; i++) {
		if (vect[i] == a) {
			vect[i] = b;
		}
	}

	cout << vect;

	return 0;
}