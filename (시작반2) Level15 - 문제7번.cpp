#include <iostream>
using namespace std;
int main() {
	char villager[8] = "ABCZETQ";
	char criminal[6];
	cin >> criminal;
	for (int y = 0; y < 5; y++) {
		int flag = 0;
		for (int x = 0; x < 7; x++) {
			if (villager[x] == criminal[y]) {
				flag = 1;
				break;
			}
		}
		if (flag == 1) cout << criminal[y] << "=�������\n";
		else cout << criminal[y] << "=�ܺλ��\n";
	}

	return 0;
}