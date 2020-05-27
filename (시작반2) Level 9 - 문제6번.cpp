#include <iostream>
using namespace std;
int main() {
	char vect[3][3];
	char alp = 'A';
	int y0, y1, x0, x1;
	char temp;

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			vect[y][x] = alp;
			alp++;
		}
	}

	cin >> y0 >> y1 >> x0 >> x1;

	temp = vect[y0][y1];
	vect[y0][y1] = vect[x0][x1];
	vect[x0][x1] = temp;

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			cout << vect[y][x];
		}
		cout << endl;
	}

	return 0;
}