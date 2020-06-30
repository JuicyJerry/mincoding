#include <iostream>
using namespace std;

int main() {
	char vect[7] = "BTKIGZ";
	char target[5] = { '\0' };
	for (int i = 0; i < 4; i++) {
		cin >> target[i];
	}

	int cnt = 0;
	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 6; i++) {
			if (target[j] == vect[i]) {
				cnt++;
				break;
			}
		}
	}
	cout << cnt;
	return 0;
}

