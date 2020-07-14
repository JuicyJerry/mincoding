#include <iostream>
using namespace std;
int main() {
	int vect[4][4];
	int t = 1;
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			vect[y][x] = t;
			t++;
		}
	}

	int target[4];
	int temp;
	for (int y = 0; y < 4; y++) {
		cin >> target[y];
	}
	int q = 0;
	int result[4][4] = { 0 };
	for (q = 0; q < 4; q++) {
		int flag = 0;
		for (int y = 0; y < 4; y++) {
			for (int x = 0; x < 4; x++) {
				if (vect[y][x] == target[q]) {
					result[y][x] = q + 1;
					flag = 1;
					break;
				}
			}
			if (flag == 1) break;
		}
	}
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			cout << result[y][x] << " ";
		}
		cout << endl;
	}



	return 0;
}