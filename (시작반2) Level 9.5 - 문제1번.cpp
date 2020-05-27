#include <iostream>
using namespace std;
int main() {
	int vectA[5] = { 2, 1, 2, 4, 5 };
	int vectB[3][3] = {
		2, 5, 3,
		4, 5, 7,
		8, 7, 2
	};
	int target;
	cin >> target;

	int cnt1 = 0;
	int cnt2 = 0;
	for (int y = 0; y < 5; y++) {
		if (vectA[y] == target) {
			cnt1++;
		}
	}
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			if (vectB[y][x] == target) {
				cnt2++;
			}
		}
	}

	cout << cnt1 + cnt2;

	return 0;
}