#include <iostream>
using namespace std;
void getCounting(int levelTable[4][2], int fruits[6]) {
	int levelCnt[6] = { 0 };
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 6; x++) {
			if (fruits[x] >= levelTable[y][0] && fruits[x] <= levelTable[y][1]) {
				levelCnt[y]++;
			}
		}
	}
	for (int i = 0; i < 4; i++) {
		cout << "lev" << i << ":" << levelCnt[i] << endl;
	}

}


int main() {
	int levelTable[4][2] = {
		10, 20,
		30, 60,
		100, 150,
		200, 300
	};

	int fruits[6];
	for (int i = 0; i < 6; i++) {
		cin >> fruits[i];
	}

	getCounting(levelTable, fruits);

	return 0;
}