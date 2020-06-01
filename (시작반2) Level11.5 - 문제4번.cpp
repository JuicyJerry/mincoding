#include <iostream>
using namespace std;
int main() {
	char vect[3][5] = {
		'a', 'b', 'a', 'c', 'z',
		'c', 't', 'a', 'c', 'd',
		'c', 'c', 'c', 'c', 'a'
	};

	char chr;
	cin >> chr;
	int cnt = 0;
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 5; x++) {
			if (vect[y][x] == chr) {
				cnt++;
			}
		}
	}

	if (cnt >= 7) cout << "세상에";
	else if (cnt >= 5) cout << "와우";
	else if (cnt >= 3) cout << "이야";
	else cout << "이런";

	return 0;
}