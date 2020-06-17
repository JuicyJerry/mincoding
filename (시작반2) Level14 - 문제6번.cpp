#include <iostream>
using namespace std;
int main() {
	int vect[7]{ 3 ,5, 1, 1, 2, 3, 2 };
	int target[4];
	for (int i = 0; i < 4; i++) cin >> target[i];
	for (int j = 0; j < 4; j++) {
		int cnt = 0;
		for (int i = 0; i < 7; i++) {
			if (vect[i] == target[j])	cnt++;
		}
		cout << target[j] << "=" << cnt << "°³\n";
	}

	return 0;
}