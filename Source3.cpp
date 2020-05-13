#include <iostream>
using namespace std;
int main() {
	int vect[6];
	for (int i = 0; i < 6; i++) {
		cin >> vect[i];
	}
	for (int i = 5; i >= 0; i--) {
		cout << vect[i] << " ";
		if (vect[i] == 7) {
			break;
		}
	}
	return 0;
}
