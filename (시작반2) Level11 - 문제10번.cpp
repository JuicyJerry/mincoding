#include <iostream>
using namespace std;
int vect[2][5] = {
	3, 2, 6, 2, 4,
	1, 4, 2, 6, 5
};

int KFC(int target) {
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 5; x++) if (vect[y][x] == target) return 1;
		return 0;
	}
}



int main() {
	int target;
	cin >> target;
	int ret = KFC(target);
	if (ret == 1) cout << "���� �����մϴ�";
	else cout << "���� �����ϴ�";

	return 0;
}