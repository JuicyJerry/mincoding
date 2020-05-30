#include <iostream>
using namespace std;

int main() {
	int vect[7] = { 3, 4, 1, 3, 2, 7, 3 };
	int input;
	cin >> input;

	int flag = 0;
	for (int i = 0; i < 7; i++) {
		if (vect[i] == input) flag++;
	}

	if (flag > 0) cout << "발견";
	else cout << "미발견";

	return 0;
}