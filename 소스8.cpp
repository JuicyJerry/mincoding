#include <iostream> 
using namespace std;
int main() {
	int cnt1 = 0, cnt2 = 0;
	int vect[3][3]{ {3, 4, 1}, {2, 1, 4}, {3, 3, 0} };

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			if (vect[y][x] % 2 == 0) {
				cnt2++;
			}
			else {
				cnt1++;
			}
		}
	}
	cout << "¦�� : " << cnt2 << endl;
	cout << "Ȧ�� : " << cnt1;
	return 0;
}