#include <iostream>
using namespace std;
int main() {
	int vect[6];
	for (int i = 0; i < 6; i++) {
		cin >> vect[i];
	}

	for (int i = 0; i < 6; i++) {
		if (vect[i] < 5) {
			cout << i << "번은 " << vect[i] << "점 불합격" << endl;
		}
		else if (vect[i] >= 5) {
			cout << i << "번은 " << vect[i] << "점 합격" << endl;
		}
	}

	return 0;
}