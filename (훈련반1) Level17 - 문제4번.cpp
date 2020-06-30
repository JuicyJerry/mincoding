#include <iostream>
using namespace std;
int isExist(int* num, int vect[3][3]) {
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			if (vect[y][x] == *num) return 1;
		}
	}
	return 0;
}

int main() {
	int vect[3][3] = {
		3, 5, 9,
		4, 2, 1,
		5, 1, 5
	};
	int i, j, p;
	cin >> i >> j >> p;

	int ret1 = isExist(&i, vect);
	int ret2 = isExist(&j, vect);
	int ret3 = isExist(&p, vect);

	if (ret1 == 1) cout << i << ":����\n";
	else if (ret1 == 0) cout << i << ":�̹߰�\n";
	if (ret2 == 1) cout << j << ":����\n";
	else if (ret2 == 0) cout << j << ":�̹߰�\n";
	if (ret3 == 1) cout << p << ":����\n";
	else if (ret3 == 0) cout << p << ":�̹߰�\n";

	return 0;
}

