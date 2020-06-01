#include <iostream>
using namespace std;
int main() {
	char vect[9] = "A1115Awz";
	char chr;
	cin >> chr;
	int flag = 0;
	for (int i = 0; i < 8; i++) {
		if (vect[i] == chr) {
			flag++;
		}
	}

	if (flag >= 3) cout << "THREE";
	else if (flag >= 2) cout << "TWO";
	else if (flag >= 1) cout << "ONE";
	else if (flag == 0) cout << "NOTHING";

	return 0;
}