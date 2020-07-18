#include <iostream>
using namespace std;
int main()
{
	char vect[11] = { '\0' };
	char chr1, chr2;
	cin >> vect;
	cin >> chr1 >> chr2;
	int len = 0;

	for (int i = 0; i < 10; i++) {
		if (vect[i] == '\0') {
			len = i;
			break;
		}
	}

	for (int i = 0; i < len - 1; i++) {
		if (vect[i] == chr1 || vect[i] == chr2) {
			if (vect[i + 1] == '\0') continue;
			vect[i + 1] = '#';
		}
	}
	for (int i = 0; i < len; i++) {
		if (vect[i] == chr1 || vect[i] == chr2) {
			if (vect[i - 1] == '\0') continue;
			vect[i - 1] = '#';
		}
	}

	cout << vect;

	return 0;
}