#include <iostream>
using namespace std;
int getCounting(int vect[3][3], int target[3], int* index) {
	int cnt = 0;
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			if (*index == vect[y][x]) cnt++;
		}
	}
	return cnt;
}

int main() {
	int vect[3][3] = {
		3, 7, 4,
		2, 2, 4,
		2, 2, 5
	};

	int target[3];
	for (int i = 0; i < 3; i++) {
		cin >> target[i];
	}
	int ret1 = getCounting(vect, target, &target[0]);
	int ret2 = getCounting(vect, target, &target[1]);
	int ret3 = getCounting(vect, target, &target[2]);

	if (ret1 > ret2 && ret1 > ret3) cout << target[0];
	else if (ret2 > ret1 && ret2 > ret3) cout << target[1];
	else if (ret3 > ret1 && ret3 > ret2) cout << target[2];

	return 0;
}

