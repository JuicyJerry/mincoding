#include <iostream>
using namespace std;
void starBox() {
	for (int i = 0; i < 20; i++) {
		if (!(i % 2 == 0)) {
			cout << i << " ";
		}
	}
}


void macDoll() {
	char chr;
	for (chr = 'H'; chr >= 'A'; chr--) {
		cout << chr << " ";
	}
}

void copyBean() {
	for (int x = -5; x < 6; x++) {
		cout << x << " ";
	}
}

int main() {
	int coffeePrice;
	cin >> coffeePrice;

	if (coffeePrice >= 3500 && coffeePrice <= 5000) starBox();
	else if (coffeePrice >= 2500 && coffeePrice < 3500) macDoll();
	else copyBean();

	return 0;
}