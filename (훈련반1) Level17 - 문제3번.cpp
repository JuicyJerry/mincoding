#include <iostream>
using namespace std;
int main() {
	char vect[8] = { 5, 9 , 4 , 6, 1 , 5, 8, 9 };
	int indexNum, TargetNum;
	cin >> indexNum;
	cin >> TargetNum;
	for (int i = 0; i < 8; i++) {
		if (vect[i] == TargetNum) {
			cout << i - indexNum;
			break;
		}
	}

	return 0;
}

