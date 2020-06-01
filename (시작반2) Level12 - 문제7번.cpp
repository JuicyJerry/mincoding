#include <iostream>
using namespace std;

int main() {
	char vect[11] = { '\0' };
	cin >> vect;
	char a, b, c;
	cin >> a >> b >> c;

	int length, i;
	int cnt1 = 0;
	int cnt2 = 0;
	int cnt3 = 0;
	for (i = 0; i < 10; i++) {
		if (vect[i] == '\0') {
			length = i;
			break;
		}
	}

	for (int j = 0; j < length; j++) {
		if (vect[j] == a) cnt1++;
		if (vect[j] == b) cnt2++;
		if (vect[j] == c) cnt3++;

	}

	cout << a << '=' << cnt1 << endl;
	cout << b << '=' << cnt2 << endl;
	cout << c << '=' << cnt3;

	return 0;
}