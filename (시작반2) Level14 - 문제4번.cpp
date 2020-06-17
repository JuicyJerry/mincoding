#include <iostream>
using namespace std;
int main() {
	char chr[6];
	for (int i = 0; i < 5; i++) {
		cin >> chr[i];
		if (chr[i] == 0)break;
	}
	for (int y = 0; y < 5; y++) {
		for (int x = y; x < 5; x++) {
			cout << chr[x] << " ";
		}
		cout << endl;
	}

	return 0;
}