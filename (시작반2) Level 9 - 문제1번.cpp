#include <iostream>
using namespace std;
int main() {
	int vect[8] = { 4, 3, 6, 1, 3, 1, 5, 3 };
	int n;
	int cnt = 0;
	cin >> n;
	for (int i = 0; i < 8; i++) {
		if (vect[i] == n) {
			cnt++;
		}
	}
	cout << "����" << n << "������" << cnt << "��";

	return 0;
}
