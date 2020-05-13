#include <iostream>
using namespace std;
int main() {
	char vect[6] = { 'D', 'T', 'A', 'B', 'W', 'Q' };
	char x;
	cin >> x;
	for (int i = 0; i < 6; i++) {
		if (vect[i] == x) {
			cout << i << "¹ø INDEX";
		}
	}
	return 0;
}