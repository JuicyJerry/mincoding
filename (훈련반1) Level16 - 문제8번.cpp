#include <iostream>
using namespace std;
int isExist(char vect[2][4], char i, char j) {
	int cnt = 0;
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 3; x++) {
			if (vect[y][x] == i) cnt++;
			else if (vect[y][x] == j) cnt++;
		}
	}
	if (cnt == 2) return 2;
	else if (cnt == 1) return 1;

	return 0;

}

int main() {
	char vect[2][4] = {
		"GKT", "PAC"
	};
	char i, j;
	cin >> i >> j;
	int ret = isExist(vect, i, j);
	if (ret == 2) cout << "대발견";
	else if (ret == 1) cout << "중발견";
	else if (ret == 0) cout << "미발견";

	return 0;
}