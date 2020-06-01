#include <iostream>
using namespace std;
char vect[9] = "MINQUEST";

char Length(char value) {
	for (int y = 0; y < 8; y++) {
		if (vect[y] == value) return y;
	}
}

int main() {
	char a, b, c;
	cin >> a >> b >> c;

	int retA = Length(a);
	int retB = Length(b);
	int retC = Length(c);

	cout << a << '=' << retA << endl;
	cout << b << '=' << retB << endl;
	cout << c << '=' << retC;

	return 0;
}