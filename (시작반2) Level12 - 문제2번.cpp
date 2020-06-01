#include <iostream>
using namespace std;
int main() {
	char vect1[10], vect2[10];
	cin >> vect1 >> vect2;
	int len1 = 0, len2 = 0;
	for (int y = 0; y < 10; y++) {
		if (vect1[y] == '\0') {
			len1 = y;
			break;
		}
	}
	for (int y = 0; y < 10; y++) {
		if (vect2[y] == '\0') {
			len2 = y;
			break;
		}
	}

	cout << len1 << " " << len2;

	return 0;
}