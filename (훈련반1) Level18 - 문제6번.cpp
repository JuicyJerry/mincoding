#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char vect[5][4] = { "ABC", "AGH", "HIJ", "KAB", "ABC" };
	int dat[100] = { 0 };
	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 4; x++) {
			dat[vect[y][x]]++;
		}
	}

	int n = 0;
	for (int i = 65; i < 100; i++) {
		if (dat[i] > 0) {
			n = dat[i];
			for (int j = 0; j < n; j++) {
				cout << (char)(i);
			}
		}
	}


	return 0;

}