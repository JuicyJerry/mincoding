#include <iostream>
using namespace std;
int main() {
	int vect[5][4];
	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 4; x++) {
			cin >> vect[y][x];
		}
	}
	int sum = 0;
	for (int y = 0; y < 5; y++) {
		sum = 0;
		for (int x = 0; x < 4; x++) {
			sum += vect[y][x];
		}
		cout << sum << " ";
	}


	return 0;
}