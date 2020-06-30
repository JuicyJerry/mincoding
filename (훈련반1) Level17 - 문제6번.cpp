#include <iostream>
using namespace std;
int isExist(int vect[2][5], int target[2][5], int input) {
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 5; x++) {
			if (vect[y][x] == 1) {
				if (target[y][x] == input) return 1;
			}
		}
	}
	return 0;
}

int main() {
	int vect[2][5] = {
		0, 0, 1, 0, 0,
		0, 0, 1, 1, 1
	};

	int target[2][5] = {
		3, 5, 4, 1, 1,
		3, 5, 2, 5, 6
	};
	int input;
	cin >> input;
	int ret = isExist(vect, target, input);
	if (ret == 1) cout << input << " 존재\n";
	else if (ret == 0) cout << input << " 없음\n";


	return 0;
}

