#include <iostream>
using namespace std;
void getMin(int vect[2][3], int* minIndex_y, int* minIndex_x) {
	int min = 9999;
	int y, x;
	for (y = 0; y < 2; y++) {
		for (x = 0; x < 3; x++) {
			if (vect[y][x] < min) {
				min = vect[y][x];
				*minIndex_y = y;
				*minIndex_x = x;
			}
		}
	}
}

void getMax(int vect[2][3], int* maxIndex_y, int* maxIndex_x) {
	int max = 0;
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 3; x++) {
			if (vect[y][x] > max) {
				max = vect[y][x];
				*maxIndex_y = y;
				*maxIndex_x = x;
			}
		}
	}
}

int main() {
	int vect[2][3];
	int minIndex_y, minIndex_x, maxIndex_y, maxIndex_x;
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 3; x++) {
			cin >> vect[y][x];
		}
	}
	getMin(vect, &minIndex_y, &minIndex_x);
	getMax(vect, &maxIndex_y, &maxIndex_x);

	cout << "(" << maxIndex_y << "," << maxIndex_x << ")\n";
	cout << "(" << minIndex_y << "," << minIndex_x << ")\n";

	return 0;
}