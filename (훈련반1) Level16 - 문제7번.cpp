#include <iostream>
using namespace std;
int isExist(char chr[5], char t) {
	for (int i = 0; i < 4; i++) {
		if (chr[i] == t) return 1;
	}
	return 0;
}

int main() {
	char chr[5] = "MTKC";
	char t;
	cin >> t;

	int ret = isExist(chr, t);
	if (ret == 1) cout << "발견";
	else cout << "미발견";
	return 0;
}