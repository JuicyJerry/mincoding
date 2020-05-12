#include <iostream>
using namespace std;
int main() {
	char vect[3];
	int cnt = 0;

	for (int i = 0; i < 3; i++) {
		cin >> vect[i];
		if (vect[i] >= 'A' && vect[i] <= 'Z') {
			cnt++;
		}
	}

	if (cnt == 3) {
		cout << "풍족하다";

	}
	else if (cnt > 0 && cnt < 3) {
		cout << "적절하다";
	}
	else {
		cout << "부족하다";
	}

	return 0;
}