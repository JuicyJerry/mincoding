#include <iostream>
using namespace std;
int main() {
	char chr[11], chr1[11];
	cin >> chr >> chr1;

	int len = 0, len1 = 0;
	for (int i = 0; i < 10; i++) {
		if (chr[i] == '\0') {
			len = i;
			break;
		}
	}

	for (int i = 0; i < 10; i++) {
		if (chr1[i] == '\0') {
			len1 = i;
			break;
		}
	}

	// 위처럼 len 길이 구할 때 for문을 한 개만 쓸 수 있나? >> NOpe 

	int t = len - 1;
	int t1 = len1 - 1;
	if (len == len1) {
		for (int j = 0; j < len; j++) {
			if (chr[j] != chr1[t]) {
				cout << "거울문장아님";
				break;
			}
			else if (j == len - 1) {
				cout << "거울문장";
				break;
			}
			t--;
		}

	}
	else cout << "거울문장아님";

	return 0;
}