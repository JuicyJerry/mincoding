#include <iostream>
using namespace std;
int main()
{
	char map[4][3];
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 3; x++) {
			cin >> map[y][x];
		}
	}
	char result[4][3] = { '\0' };
	for (int x = 0; x < 3; x++) {
		int t = 3;
		for (int y = 3; y >= 0; y--) {
			if (map[y][x] >= 'A' && map[y][x] <= 'Z') {
				result[t][x] = map[y][x];
				t--;
			}
		}
	}

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 3; x++) {
			if (result[y][x] >= 'A' && result[y][x] <= 'Z') cout << result[y][x];
			else cout << '_';
		}
		cout << endl;
	}


	return 0;
}