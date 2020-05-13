#include <iostream>
using namespace std;
int main() {
	int vect[3][4] = { {4, 3, 1, 1}, {3, 1, 2, 1}, {0, 0, 1, 2} };
	int num;
	cin >> num;
	int cnt = 0;
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			if (vect[y][x] == num) {
				cnt += 1;
			}
		}
	}

	cout << cnt << "개 존재합니다";

	return 0;
}