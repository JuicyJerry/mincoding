#include <iostream>
using namespace std;
int main() {
	int juso[8] = { 402, 401, 302, 301, 202, 201, 102, 101 };
	char name[8][6] = { "KIM", "TEA", "SOM", "OPPO", "TOM", "GDK", "JAME", "MIN" };
	int address;
	cin >> address;

	int i;
	for (i = 0; i < 8; i++) {
		if (juso[i] == address) {
			address = i;
			break;
		}
	}

	cout << name[i];

	return 0;
}