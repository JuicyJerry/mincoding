#include <iostream>
using namespace std;

int main() {
	char vect[11];
	cin >> vect;

	char GHOST[6] = "GHOST";
	int len = 0;
	for (int i = 0; i < 10; i++) {
		if (vect[i] == '\0') {
			len = i;
			break;
		}
	}

	int dat[100] = { 0 };
	for (int i = 0; i < len; i++) {
		dat[vect[i]] = 1;
	}
	int flag = 0;
	for (int i = 0; i < 5; i++) {
		if (dat[GHOST[i]] != 1) flag = 1;
	}
	if (flag == 1) cout << "�������� ����";
	else cout << "����";


	return 0;
}