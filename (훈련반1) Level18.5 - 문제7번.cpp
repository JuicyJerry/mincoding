#include <iostream>
using namespace std;

char vect[10] = "MINCODING";
int n;
char input[10];

int isExist(char target) {
	for (int i = 0; i < 9; i++) {
		if (vect[i] == target) return 1;
	}
	return 0;
}

int main() {
	cin >> n;

	for (int j = 0; j < n; j++) {
		cin >> input[n];
		int ret = isExist(input[n]);

		if (ret == 1) cout << "O";
		else cout << "X";
	}

	return 0;
}