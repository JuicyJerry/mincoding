#include <iostream>
using namespace std;
int main() {
	char x, y;
	int z;
	int q = 1;
	cin >> x >> y >> z;

	while (q <= z) {
		for (char t = x; t <= y; t++) {
			cout << t;
		}
		q++;
		cout << endl;
	}
	return 0;
}