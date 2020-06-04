#include <iostream>
using namespace std;
int main() {
	char vect[100] = { 0 };
	int len = 0;
	int cnt = 0;
	char lastChr;
	cin >> vect;
	for (int i = 0; i < 100; i++) {
		if (vect[i] == 0) {
			lastChr = vect[i - 1];
			break;
		}
		len = (i + 1);
	}

	for (int i = 0; i < len; i++) {
		if (vect[i] == lastChr)
			cnt++;
		if (vect[i] == 0) break;
	}
	cout << len << endl << cnt;

	return 0;
}