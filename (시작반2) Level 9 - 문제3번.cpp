#include <iostream>
using namespace std;
int main() {
	char vect[6] = { 'A', 'F', 'G', 'A', 'B', 'C' };
	char x, y;
	cin >> x >> y;
	int cnt1 = 0;
	int cnt2 = 0;


	for (int i = 0; i < 6; i++) {
		if (vect[i] == x) {
			cnt1++;
		}
		else if (vect[i] == y) {
			cnt2++;
		}
	}

	if (cnt1 >= 2) {
		cnt1 = 1;
	}
	else if (cnt2 >= 2) {
		cnt2 = 1;
	}

	if (cnt1 + cnt2 >= 2) {
		cout << "와2개";
	}
	else if (cnt1 + cnt2 == 1) {
		cout << "오1개";
	}
	else {
		cout << "우0개";
	}

	return 0;
}