#include <iostream>
using namespace std;
int password[4] = { 3, 7, 4, 9 };
int isSame(int input[4]) {
	for (int x = 0; x < 4; x++) {
		if (input[x] != password[x]) return 1;
	}

	return 0;
}


int main() {
	int input[4];
	for (int i = 0; i < 4; i++) {
		cin >> input[i];
	}

	int ret = isSame(input);
	if (ret == 1) cout << "fail";
	else cout << "pass";

	return 0;
}