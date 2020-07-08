#include <iostream>
using namespace std;
int main() {
	int vect[6];
	for (int i = 0; i < 6; i++) {
		cin >> vect[i];
	}

	int dat[10] = { 0 };
	for (int i = 0; i < 6; i++) {
		dat[vect[i]]++;
	}
	int flag = 0;
	for (int i = 0; i < 10; i++) {
		if (dat[i] >= 2) {
			flag = 1;
			break;
		}
	}

	if (flag == 1) cout << "도플갱어 발견";
	else cout << "미발견";

	return 0;
}