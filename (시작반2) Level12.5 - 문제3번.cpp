#include <iostream>
using namespace std;
char vect[4][4] = { "DAD", "QWQ", "ASD", "ASD" };

void find(char chr) {
	int y, x;
	int flag = 0;
	for (y = 0; y < 4; y++) {
		for (x = 0; x < 3; x++) {
			if (vect[y][x] == chr) {
				flag++;
				break;
			}
		}
	}
	if (flag > 0) cout << "����";
	else cout << "����";
}

int main() {
	char chr;
	cin >> chr;
	find(chr);

	return 0;
}