#include <iostream>
using namespace std;
int main() {
	int vect[6] = { 10, 50, 40, 20, 30, 40 };
	int target[6];
	for (int i = 0; i < 6; i++) {
		cin >> target[i];
	}
	for (int y = 0; y < 6; y++) {
		int cnt = 0;
		for (int x = 0; x < 6; x++) {
			if (vect[x] > target[y]) {
				cnt++;
			}
		}
		cout << target[y] << "=" << cnt << "°³\n";
	}

	return 0;
}