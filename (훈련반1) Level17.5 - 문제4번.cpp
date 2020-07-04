#include <iostream>
using namespace std;
int main() {
	int map[2][3] = {
		3, 55, 42,
		-5, -9, -10
	};
	int pix[2][2];
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 2; x++) {
			cin >> pix[y][x];
		}
	}

	int flag = 0;
	int t = 0;
	int tempMap[6], tempPix[4];
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 2; x++) {
			tempPix[t] = pix[y][x];
			t++;
		}
	}
	t = 0;
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 3; x++) {
			tempMap[t] = map[y][x];
			t++;
		}
	}
	char result[2][2];
	t = 0;
	for (int y = 0; y < 6; y++) {
		flag = 0;
		for (int x = 0; x < 4; x++) {
			if (tempMap[y] == tempPix[x]) {
				flag = 1;
				result[y][t] == 'Y';
				t++;
				break;
			}
		}
		if (flag == 0) {
			result[y][t] = 'N';
			t++;
		}
		if (t == 2) t = 0;
	}


	return 0;
}