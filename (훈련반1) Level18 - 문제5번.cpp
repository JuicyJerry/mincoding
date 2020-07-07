#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char town[3][4] = { "CDA", "BMZ", "QPO" };
	char black[5];
	cin >> black;
	int dat[100] = { 0 };
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 4; i++) {
			dat[town[j][i]] = 1;
		}
	}
	int cnt = 0;
	for (int j = 0; j < 4; j++) {
		if (dat[black[j]] == 1) cnt++;
	}
	cout << cnt << "Έν";

	return 0;

}