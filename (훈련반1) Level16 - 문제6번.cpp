#include <iostream>
using namespace std;

void getLength(char arr[3][11], int len[3][1]) {
	for (int y = 0; y < 3; y++) {
		int t = 0;
		for (int x = 0; x < 10; x++) {
			if (arr[y][x] == '\0') {
				len[y][t] = x;
				break;
			}
		}
	}
}

int isExist(char arr[3][11], int len[3][1]) {
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < len[y][x]; y++) {
			if (arr[y][x] == 'M') return 1;
		}
	}
	return 0;
}
int main() {
	char arr[3][11];
	for (int y = 0; y < 3; y++) {
		cin >> arr[y];
	}
	int len[3][1] = { 0 };
	getLength(arr, len);
	int ret = isExist(arr, len);

	if (ret == 1) cout << "M이 존재합니다";
	else cout << "M이 존재하지 않습니다";

	return 0;
}