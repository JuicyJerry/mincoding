#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int train[8] = { 3, 7, 6, 4, 2, 9, 1, 7 };
	int team[3];
	for (int i = 0; i < 3; i++) {
		cin >> team[i];
	}

	int dat[10] = { 0 };
	for (int i = 0; i < 8; i++) {
		dat[train[i]]++;
	}
	int t = 0;
	int n = 0;
	int temp[3] = { 0 };
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 10; i++) {
			if (dat[i] >= 1) {
				n = i;
				for (int z = 0; z < 9; z++) {
					if (n == train[z]) {
						temp[t] = n;
						t++;
					}
				}

			}
		}
	}

	cout << temp[0] << "~" << temp[2] << " ĭ";

	return 0;

}