#include <iostream>
#include <cstring>
using namespace std;
char cardList[15];
char DAT[200];

int main() {
	cin >> cardList;
	int n = strlen(cardList);
	for (int i = 0; i < n; i++) {
		DAT[cardList[i]]++;
	}

	int cnt = 0;
	for (int i = 0; i < 200; i++) {
		if (DAT[i] > 0) cnt++;
	}
	cout << cnt << "°³";

	return 0;
}