#include <iostream>
using namespace std;
int main() {
	char vect[5];
	for (int i = 0; i < 5; i++) {
		cin >> vect[i];
	}

	int cnt = 0;
	char input = 'A';
	for (int i = 0; i < 5; i++) {
		if (vect[i] == input) cnt++;
	}

	cout << "����" << input << "�� " << cnt << "���߰�" << endl;

	for (int i = 0; i < 5; i++) {
		if (vect[i] == input) cout << i << "��" << endl;
	}

	return 0;
}