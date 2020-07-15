#include <iostream>
using namespace std;
int main() {
	char v1[11];
	char v2[11];
	cin >> v1;
	int len1 = 0;
	int len2 = 0;
	for (int i = 0; i < 10; i++) {
		if (v1[i] == '\0') {
			len1 = i;
			len2 = i / 2;
			break;
		}
	}

	int flag = 0;
	if (len1 == len2 * 2) {
		for (int y = 0; y < len2; y++) {
			if (v1[y] != v1[y + len2]) {
				flag = 1;
				break;
			}
		}
	}

	else if (len1 != len2) {
		flag = 1;
	}

	if (flag == 0) cout << "동일한문장";
	else cout << "다른문장";

	return 0;
}