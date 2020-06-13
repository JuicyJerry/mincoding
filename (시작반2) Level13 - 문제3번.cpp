#include <iostream>
using namespace std;
void stringLen(char chr[20], int* len) {
	for (int i = 0; i < 20; i++) {
		if (chr[i] == '\0') {
			*len = i;
			break;
		}
	}
}

int main() {
	char chr[20];
	cin >> chr;

	int len;

	stringLen(chr, &len);
	cout << len << "±ÛÀÚ";

	return 0;
}