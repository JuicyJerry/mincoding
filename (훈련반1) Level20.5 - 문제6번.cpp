#include <iostream>
using namespace std;
int main() {
	int vect[7];
	for (int i = 0; i < 7; i++) {
		cin >> vect[i];
	}

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x <= 3 + y; x++) {
			cout << vect[x] << " ";
		}
		cout << endl;
	}

	return 0;
}