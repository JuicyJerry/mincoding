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

	if (cnt >= 7) cout << "����";
	else if (cnt >= 5) cout << "�Ϳ�";
	else if (cnt >= 3) cout << "�̾�";
	else cout << "�̷�";

	return 0;
}