#include <iostream>
using namespace std;
int main() {
	char vect[11];
	cin >> vect;

	char a, b, c;
	cin >> a >> b >> c;

	int len = 0;
	for (int i = 0; i < 11; i++) {
		if (vect[i] == '\0') {
			len = i;
			break;
		}
	}

	int cnt1 = 0;
	int cnt2 = 0;
	int cnt3 = 0;

	for (int i = 0; i < len; i++) {
		if (vect[i] == a) cnt1++;
		else if (vect[i] == b) cnt2++;
		else if (vect[i] == c) cnt3++;
	}

	cout << a << "=" << cnt1 << endl << b << "=" << cnt2 << endl << c << "=" << cnt3;


	return 0;
}
