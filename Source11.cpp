#include <iostream>
using namespace std;
int main() {
	int vect[6];
	for (int i = 0; i < 6; i++) {
		cin >> vect[i];
	}

	for (int i = 0; i < 6; i++) {
		if (vect[i] < 5) {
			cout << i << "���� " << vect[i] << "�� ���հ�" << endl;
		}
		else if (vect[i] >= 5) {
			cout << i << "���� " << vect[i] << "�� �հ�" << endl;
		}
	}

	return 0;
}