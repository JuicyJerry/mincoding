#include <iostream>
using namespace std;

int main() {
	int vect[2][3];
	for (int y = 1; y >= 0; y--) {
		for (int x = 2; x >= 0; x--) {
			cin >> vect[y][x];
		}
	}

	int arr[6];
	int t = 0;
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 3; x++) {
			arr[t] = vect[y][x];
			t++;
		}
	}

	int temp;
	temp = arr[5];
	arr[5] = arr[0];
	arr[0] = temp;

	for (int i = 0; i < 6; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}