#include <iostream>
using namespace std;
int main() {
	int vect[9] = { 0 };
	int startIndex[3], endIndex[3];
	for (int i = 0; i < 3; i++) {
		cin >> startIndex[i] >> endIndex[i];
	}
	for (int j = 0; j < 3; j++) {
		for (int i = startIndex[j]; i <= endIndex[j]; i++) {
			vect[i] += 1;
		}
	}
	for (int i = 0; i < 9; i++) {
		cout << vect[i] << " ";
	}


	return 0;
}