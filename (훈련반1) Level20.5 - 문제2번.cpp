#include <iostream>
using namespace std;

int main() {
	char sentence[11];
	cin >> sentence;
	int len = 0;

	for (int y = 0; y < 10; y++) {
		if (sentence[y] == '\0') {
			len = y;
			break;
		}
	}

	for (int y = 0; y < len; y++) {
		for (int x = len - y - 1; x < len; x++) {
			cout << sentence[x];
		}
		cout << endl;
	}

	return 0;
}