#include <iostream>
using namespace std;
char target;
int cnt = 0;

char vect[2][3] = {
	{'F', 'E', 'W'}, {'D', 'C', 'A'}
};

void findCh(char target) {
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 3; x++) {
			if (vect[y][x] == target) {
				cnt++;
				break;
			}
		}
		if (cnt == 1) break;
	}
	if (cnt > 0) cout << "발견";
	else cout << "미발견";
}

int main() {
	cin >> target;
	findCh(target);


	return 0;
}