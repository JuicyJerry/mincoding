#include <iostream>
using namespace std;
int main() {
	int vect[6] = { 0 };
	for (int i = 0; i < 6; i++) {
		cin >> vect[i];
	}

	for (int i = 1; i <= 5; i++) {
		int t = vect[i] - vect[i - 1];
		if (t >= 3 || t <= -3) {
			cout << "���ġ�ʿ�";
			break;
		}
		else if (i == 5) {
			cout << "�Ϻ��ѹ�ġ";
			break;
		}
	}

	return 0;
}