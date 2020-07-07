#include <iostream>
#include <cstring>
using namespace std;
int attendRecord[3][4] = {
	65000, 35, 42, 70,
	70, 35, 65000, 1300,
	65000, 30000, 38, 42
};

int dat[65001];

int main() {
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			dat[attendRecord[y][x]]++;
		}
	}
	int max = 0;
	int maxIndex = 0;
	for (int i = 0; i <= 65000; i++) {
		if (dat[i] > max) {
			max = dat[i];
			maxIndex = i;
		}
	}
	cout << maxIndex;


	return 0;
}