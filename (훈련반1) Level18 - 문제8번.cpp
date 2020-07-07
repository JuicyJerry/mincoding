#include <iostream>
#include <cstring>
using namespace std;

int apartment[5][3] = {
	15, 18, 17,
	4, 6, 9,
	10, 1, 3,
	7, 8, 9,
	15, 2, 6
};

int family[3];

int isPattern(int i) {
	for (int x = 0; x < 3; x++) {
		if (family[x] == apartment[i][x]) return 1;
	}

	return 0;
}

int main() {
	for (int i = 0; i < 3; i++) {
		cin >> family[i];
	}
	for (int i = 0; i < 5; i++) {
		int ret = isPattern(i);
		if (ret == 1) {
			cout << i + 1 << "Ãş";
			break;
		}
	}


	return 0;

}