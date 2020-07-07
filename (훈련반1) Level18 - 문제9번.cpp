#include <iostream>
#include <cstring>
using namespace std;

int vect[3][5] = {
	1, 3, 3, 5, 1,
	3, 6, 2, 4, 2,
	1, 9, 2, 6, 5
};

int main() {
	int n;
	cin >> n;

	int dat[10] = { 0 };
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 5; x++) {
			dat[vect[y][x]]++;
		}
	}

	for (int i = 0; i < 10; i++) {
		if (dat[i] == n) cout << i << " ";
	}


	return 0;

}