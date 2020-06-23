#include <iostream>
using namespace std;
int main() {
	char chr[3][6] = { "POTIO", "ABCDE", "YOURE" };
	int a, b;
	cin >> a >> b;

	for (int y = 0; y < 3; y++) {
		for (int x = a; x <= b; x++) {
			cout << chr[y][x];
		}
	}

	return 0;
}