#include <iostream>
using namespace std;
int main() {
	char vect[3][5] = { {'A', 'B', 'C', 'D', 'E'}, {'E', 'A', 'B', 'A', 'B'}, {'A', 'C', 'D', 'E', 'R'} };
	char target;
	cin >> target;
	int cnt = 0;

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 5; x++) {
			if (vect[y][x] == target) {
				cnt++;
			}
		}
	}

	if (cnt >= 3) {
		cout << "대발견";
	}
	else if (cnt == 1 || cnt == 2) {
		cout << "발견";
	}
	else if (cnt == 0) {
		cout << "미발견";
	}
	return 0;
}