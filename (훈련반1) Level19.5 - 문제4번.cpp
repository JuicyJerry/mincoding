#include <iostream>
using namespace std;
int main() {
	int map[4][4] = { 0 };
	char input;
	int num;
	for (int i = 0; i < 3; i++) {
		cin >> input;
		cin >> num;
		if (input == 'G' && num >= 0 && num <= 3) {
			for (int j = 0; j < 4; j++) {
				map[num][j] = 1;
			}
		}
		else if (input == 'S' && num >= 0 && num <= 3) {
			for (int j = 0; j < 4; j++) {
				map[j][num] = 1;
			}
		}
	}
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			cout << map[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}