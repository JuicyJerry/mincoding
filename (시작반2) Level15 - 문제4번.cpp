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

	// ��ó�� len ���� ���� �� for���� �� ���� �� �� �ֳ�? >> NOpe 

	int t = len - 1;
	int t1 = len1 - 1;
	if (len == len1) {
		for (int j = 0; j < len; j++) {
			if (chr[j] != chr1[t]) {
				cout << "�ſ﹮��ƴ�";
				break;
			}
			else if (j == len - 1) {
				cout << "�ſ﹮��";
				break;
			}
			t--;
		}

	}
	else cout << "�ſ﹮��ƴ�";

	return 0;
}