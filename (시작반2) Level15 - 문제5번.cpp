#include <iostream>
using namespace std;
int main() {
	char vect1[7], vect2[7], vect3[7], vect4[7];
	cin >> vect1 >> vect2 >> vect3 >> vect4;
	int len[4];
	for (int i = 0; i < 7; i++) {
		if (vect1[i] == '\0') {
			len[0] = i;
		}
		if (vect2[i] == '\0') {
			len[1] = i;
		}
		if (vect3[i] == '\0') {
			len[2] = i;
		}
		if (vect4[i] == '\0') {
			len[3] = i;
		}
	}

	int temp;
	for (int y = 0; y < 4; y++) {
		for (int x = y; x < 4; x++) {
			if (len[y] > len[x]) {
				temp = len[y];
				len[y] = len[x];
				len[x] = temp;
			}
		}
	}

	for (int i = 0; i < 4; i++) {
		cout << len[i] << " ";
	}

	return 0;
}