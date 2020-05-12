#include <iostream>
using namespace std;
int main() {
	int vect[2][4] = { 0 };
	int y, x;
	cin >> y >> x;

	vect[y][x] = 1;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			cout << vect[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}