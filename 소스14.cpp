#include <iostream>
using namespace std;
int main() {
	int arr[6] = { 0 };
	int x, y, z;
	cin >> x >> y >> z;

	if (x >= 0 && x <= 1000) {
		arr[x] = 1;
	}
	if (y >= 0 && y <= 1000) {
		arr[y] = 1;
	}
	if (z >= 0 && z <= 1000) {
		arr[z] = 1;
	}

	for (int i = 0; i < 6; i++) {
		cout << arr[i] << " ";
	}

	int a, b, c, t;
	int vect[6] = { 0 };
	cin >> a >> b >> c;
	vect[a] = 1;
	vect[b] = 1;
	vect[c] = 1;

	for (t = 0; t < 6; t++) {
		cout << vect[t] << " ";
	}

	return 0;
}