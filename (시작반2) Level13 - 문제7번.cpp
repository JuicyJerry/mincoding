#include <iostream>
using namespace std;
char vect[3][4] = { "ABF", "QWE", "ZXC" };

void find(char* chr, int* y, int* x) {
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 3; i++) {
			if (vect[j][i] == *chr) {
				*y = j;
				*x = i;
				return;
			}
		}
	}
}

int main() {
	char chr;
	cin >> chr;
	int y, x;
	find(&chr, &y, &x);
	cout << y << ',' << x;
	return 0;
}