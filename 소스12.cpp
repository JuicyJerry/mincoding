#include <iostream>
using namespace std;
int num;

void BBQ() {
	if (0 < num && num < 5) {
		cout << "초기값";
	}
	else if (6 < num && num < 10) {
		cout << "중간값";
	}
	else {
		cout << "알수없는값";
	}
}

int main() {
	cin >> num;

	if (num == 3 || num == 5 || num == 7) {
		for (int y = 0; y < 10; y++) {
			cout << y + 1;
		}
	}
	else if (num == 0 || num == 8) {
		for (int x = 10; x >= 1; x--) {
			cout << x;
		}
	}
	else {
		BBQ();
	}

	return 0;
}