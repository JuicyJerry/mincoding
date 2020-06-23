#include <iostream>
using namespace std;
int main() {
	char chr[4][6];
	int flag1 = 0;
	int flag2 = 0;
	for (int y = 0; y < 4; y++) cin >> chr[y];

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 5; x++) {
			if (chr[y][x] == 'A') {
				flag1 = 1;
				break;
			}
			else if (chr[y][x] == 'B') {
				flag2 = 1;
				break;
			}
		}
	}
	if (flag1 >= 1 && flag2 >= 1) cout << "대발견";
	else if ((flag1 >= 1 && flag2 == 0) || (flag1 == 0 && flag2 == 1)) cout << "중발견";
	else if (flag1 == 0 && flag2 == 0)	cout << "미발견";

	return 0;
}
