#include <iostream>
using namespace std;

int main() {
	char v1[10];
	char v2[10];
	char v3[10];
	cin >> v1 >> v2 >> v3;

	int dat[100] = { 0 };
	for (int i = 0; i < 9; i++) {
		dat[v1[i]]++;
		dat[v2[i]]++;
		dat[v3[i]]++;
	}
	int flag = 0;
	for (int i = 65; i < 91; i++) {
		if (dat[i] >= 2) {
			flag = 1;
			break;
		}
	}

	if (flag == 1) cout << "No";
	else cout << "Perfect";

	return 0;
}