#include <iostream>
using namespace std;
int main() {
	char wording[5], wording1[5];
	cin >> wording >> wording1;
	int len = 0;
	int len1 = 0;
	for (int i = 0; i < 5; i++) {
		if (wording[i] == '\0') break;
		else len = i;
	}
	for (int i = 0; i < 5; i++) {
		if (wording1[i] == '\0') break;
		else len1 = i;
	}
	char temp;
	for (int y = 0; y <= len; y++) {
		for (int x = y + 1; x <= len; x++) {
			if (wording[y] > wording[x]) {
				temp = wording[y];
				wording[y] = wording[x];
				wording[x] = temp;
			}

		}
	}
	char temp1;
	for (int y = 0; y <= len1; y++) {
		for (int x = y + 1; x <= len1; x++) {
			if (wording1[y] > wording1[x]) {
				temp1 = wording1[y];
				wording1[y] = wording1[x];
				wording1[x] = temp1;
			}
		}
	}

	cout << wording << wording1;

	return 0;
}