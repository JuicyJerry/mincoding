#include <iostream>
using namespace std;
int main() {
	int input;
	cin >> input;

	for (int y = input; y > input - 4; y--) {
		for (int x = 0; x < 4; x++) {
			cout << y;
		}
		cout << endl;
	}
	return 0;
}