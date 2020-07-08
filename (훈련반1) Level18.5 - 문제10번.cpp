#include <iostream>
using namespace std;

int main() {
	char vect[11];
	cin >> vect;
	int len = 0;
	for (int i = 0; i < 10; i++) {
		if (vect[i] == '\0') {
			len = i;
			break;
		}
	}
	int dat[100] = { 0 };
	for (int i = 0; i < len; i++) {
		dat[vect[i]]++;
	}

	for (int i = 65; i < 91; i++) {
		if (dat[i] > 0) cout << (char)(i) << ":" << dat[i] << endl;
	}


	return 0;
}