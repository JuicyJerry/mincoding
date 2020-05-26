#include <iostream>
using namespace std;
char a, b, c, d, e;
char vect[5];

void checkChar(char vect) {
	if (vect >= 'A' && vect <= 'Z') cout << "´ë";
	else if (vect >= 'a' && vect <= 'z') cout << "¼Ò";
}

int main() {
	for (int i = 0; i < 5; i++) {
		cin >> vect[i];
	}

	for (int i = 0; i < 5; i++) {
		checkChar(vect[i]);
	}

	return 0;
}