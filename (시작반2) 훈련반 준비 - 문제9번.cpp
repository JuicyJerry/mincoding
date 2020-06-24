#include <iostream>
using namespace std;
int main() {
	int vect[2][3];
	int tempArray[6] = { 0 };
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 3; x++) {
			cin >> vect[y][x];
		}
	}

	int t = 0;
	for (int j = 0; j < 2; j++) {
		for (int i = 0; i < 3; i++) {
			tempArray[t] = vect[j][i];
			t++;
		}
	}

	int temp;
	for (int j = 0; j < 6; j++) {
		for (int i = j + 1; i < 6; i++) {
			if (tempArray[j] > tempArray[i]) {
				temp = tempArray[j];
				tempArray[j] = tempArray[i];
				tempArray[i] = temp;
			}
		}
	}
	t = 0;
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 3; x++) {
			vect[y][x] = tempArray[t];
			t++;
		}
	}

	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 3; x++) {
			cout << vect[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}