#include <iostream>
using namespace std;
int main() {
	int v1[4][4] = { 0 };
	int v2[4][4] = { 0 };

	int flag = 0;
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			cin >> v1[y][x];
		}
	}

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			cin >> v2[y][x];
			if (v2[y][x] == v1[y][x] && v2[y][x] == 1) {
				flag = 1;
				break;
			}
		}
		if (flag == 1) break;
	}
	if (flag == 0) cout << "�ɸ����ʴ´�";
	else cout << "�ɸ���";

	return 0;
}