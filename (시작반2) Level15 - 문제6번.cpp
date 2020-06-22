#include <iostream>
using namespace std;
int main() {
	char chr[11];
	cin >> chr;
	int len = 0;
	int flag = 0;
	for (int i = 0; i < 10; i++) {
		if (chr[i] == '\0') {
			len = i;
			break;
		}
	}
	// 대문자: 0, 소문자:1
	int findAlphabetStatus[10] = { 0 };
	for (int i = 0; i < len; i++) {
		if (chr[i] >= 'A' && chr[i] <= 'Z') {
			findAlphabetStatus[i] = 0;
		}
		else if (chr[i] >= 'a' && chr[i] <= 'z') {
			findAlphabetStatus[i] = 1;
		}
	}
	for (int i = 0; i < len - 1; i++) {
		int t = findAlphabetStatus[i] - findAlphabetStatus[i + 1];
		if (t == -1) t *= -1;

		if (t != 1) {
			flag = 1;
			break;
		}
		else if (i == len - 2) {
			flag = 0;
			break;
		}
	}

	if (flag == 1) cout << "일반문장";
	else cout << "개구리문장";
	return 0;
}