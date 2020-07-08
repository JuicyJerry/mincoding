#include <iostream>
using namespace std;
int main() {
	char vect[2][3];
	vect[0][0] = 'G';
	vect[0][1] = 'K';
	vect[0][2] = 'G';

	for (int i = 0; i < 3; i++) {
		cin >> vect[1][i];
	}

	int dat[100] = { 0 };
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 3; x++) {
			dat[vect[y][x]]++;
		}
	}

	int flag = 0;
	for (int i = 65; i < 100; i++) {
		if (dat[i] >= 3) {
			flag = 1;
			break;
		}
	}

	if (flag == 1) cout << "있음";
	else cout << "없음";

	return 0;
}